const hamb = document.getElementById("menu-hamb");

const nav = document.getElementById("menu-nav");

hamb.addEventListener("mouseenter", () => {
  nav.classList.remove("hidden");
  nav.classList.add("w-30", "transition", "ease-in-out", "duration-700");
});

hamb.addEventListener("mouseout", () => {
  nav.classList.add("hidden");
});
