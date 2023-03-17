const template = `<nav class="navbar">
        <ul class="navbar-nav">
            <!-- <li class="nav-item">
                <a href="#" class="nav-link">
                    <i class="fa-xl fa-solid fa-bars"></i>
                </a>
            </li> -->
            <li class="nav-item">
                <a href="/index.html" class="nav-link">
                <div id='home_link' class="bordering-icons"> <i class="fa-xl fa-solid fa-house-chimney"></i></div>
                    <span class="link-text">Home</span>
                </a>
            </li>
            <li class="nav-item">
                <a href="/pages/activities.html" class="nav-link">
                    <!-- <i class="fa-xl fa-solid fa-bicycle"></i> -->
                    <div id="activity_link" class="bordering-icons"> <i class="fa-xl fa-solid fa-rocket"></i></div>
                    <span class="link-text">Activity</span>
                </a>
            </li>
            <li class="nav-item">
                <a href="/pages/clubs.html" class="nav-link">
                    <div id="clubs_link" class="bordering-icons"><i class="fa-xl fa-solid fa-users"></i></div>
                    <span class="link-text">Clubs</span>
                </a>
            </li>
            <li class="nav-item">
                <a href="/pages/login.html" class="nav-link">
                    <div class="bordering-icons"> <i class="fa-xl fa-solid fa-right-from-bracket"></i></div>
                    <span class="link-text">Logout</span>
                </a>
            </li>
        </ul>
    </nav>
`;

class NavBar extends HTMLElement {
    constructor() {
        super();

        this.innerHTML = template;
        const ele = this.querySelector(`#${this.getAttribute("active").toLowerCase()}_link`);
        ele.classList.add("active-link");
    }
}

window.customElements.define("nav-bar", NavBar);