
$(document).ready(
	function ()
	{
		$("div.popbutton").click(close_popup);
		
		$(".blog").mouseenter(
		function()
		{
		alert("You entered the blog");
		});
		
		$("#legendary").mouseleave(
		function()
		{
		alert("You've left the form page");
		});
		
		$("#hideverything").dblclick(
		function()
		{
		$("*").hide();
		});
		
		$("input").focus(
			function(){
			$(this).css("background-color", "#d5faff");
		});
		
		$("input").blur(
			function(){
			$(this).css("background-color", "#ffffff");
		});

			
			
	}
);
function calc()
{
  if (document.getElementById('testing').checked) 
  {
      document.getElementById('tested').value = "Our favourite too";
  }
}

function close_popup()
{
	$("div.popup").fadeOut();
}

function fly1()
{
	document.getElementById("item1").style.transform = "translateX(0)";
	document.getElementById("item2").style.transform = "translateX(0)";
	document.getElementById("item3").style.transform = "translateX(0)";
	document.getElementById("item4").style.transform = "translateX(0)";
	document.getElementById("item5").style.transform = "translateX(0)";
	document.getElementById("item6").style.transform = "translateX(0)";
	document.getElementById("item7").style.transform = "translateX(0)";
	document.getElementById("item8").style.transform = "translateX(0)";
	document.getElementById("item9").style.transform = "translateX(0)";
	document.getElementById("item10").style.transform = "translateX(0)";
	document.getElementById("item11").style.transform = "translateX(0)";
	document.getElementById("item12").style.transform = "translateX(0)";
	document.getElementById("item13").style.transform = "translateX(0)";
}

function startAnimation()
{
	setTimeout(fly1, 5);
}

var r = 0;

function spin()
{
	r = r + 1;
	document.getElementById("DT").style.transform = "rotate3D(0,1,0, " + r + "deg)";
}
	setInterval(spin, 20);
	