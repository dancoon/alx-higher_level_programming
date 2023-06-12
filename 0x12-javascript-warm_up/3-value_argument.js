#!/usr/bin/node
const argsCount = process.argv.length - 2;
if (argsCount >= 1) {
  console.log(process.argv[2]);
} else {
  console.log("No argument");
}
