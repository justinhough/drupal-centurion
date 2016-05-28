Drupal Centurion
====================
Version 3.6.3

Centurion is a Drupal starter theme built on Centurion and designed to help template new sites quickly. It was initially designed to allow a website to auto-size to the browser. Using CSS3 media queries Centurion can auto-size from a 960px width for a desktop down to 320px for a mobile device. It was built to be a framework, and allows for customization outside of the layout.

The basic Centurion Framework is available for download on Github (https://github.com/justinhough/Centurion)

## Requirements
- Drupal 7.x.
- A passion for making the web better

### Components
- The Grid
- Alerts
- Blockquotes
- Buttons
- Captions
- Colors
- Elusive Web Font
- Frame boxes
- Font-face
- Lists
- Images (adaptive and sprites)
- Navigation
- Pagination
- Print Styles
- Tabs
- Tables
- Tooltips
- Typography

### Future Features
- Right-to-Left language support
- Template adjustment inside of Drupal
- More to come...

## Customization

The Centurion Framework is built using CSS3 media queries, and certain features are customizable based on the desktop size. For screen sizes smaller than 480, the grid will layout in a scrollable format from top to bottom of the page. (Basically, all grids no matter what size will get resized to a set width, and will stack on top of each other.) This is done to allow for mobile devices to easily scroll through the site without having to zoom-in or out to see the content.

** The example below works off a simple feature that detects if certain areas of the page are turned on or off depending on if blocks are present. So if the right bar has no blocks in it, then the content area will resize to fit the rest of the width. You can see this by looking at the variable that is being set in the first portion of the class attribute. Then it it is untrue tenth "centurion_chclass" gets set to null and the extra space is passed to the content area. (This script is adapted from the 960 grid theme, which essentially works the same way, but ideally this only allows the content area to grow not the left sidebar. Eventually this will feature will expand to include more options, but for now this is what is available.)


## Submit Features

If you would like to see new features in the next release of
this theme, please "Create an Issue" and assign the "Category"
to feature request.

Though if you have questions feel free to contact me @
justin at justinhough dot com
