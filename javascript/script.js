// Smooth scroll to "features" section on button click
document.getElementById("cta-button").addEventListener("click", function () {
  document.getElementById("features").scrollIntoView({
    behavior: "smooth"
  });
});

