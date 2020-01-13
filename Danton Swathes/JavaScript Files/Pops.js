
function show_popup ( source, description )
{
	var p = document.getElementById("popup");
	p.style.display = "block";
	p.style.opacity = "0";
	setTimeout(popup_fade_in, 5);

	document.getElementById("popup_image").src = source;
	document.getElementById("popup_image").alt = description;
	document.getElementById("popup_caption").innerHTML = description;
}

function popup_fade_in ()
{
	document.getElementById("popup").style.opacity = "100";
}

function hide_popup ()
{
	document.getElementById("popup").style.opacity = "0";
	setTimeout(popup_display_none, 500);
}

function popup_display_none ()
{
	document.getElementById("popup").style.display = "none";
}
