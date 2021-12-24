const search = 8;
const abc = [2, 4, 5, 6, 8, 3].map((item, index) => {
   console.log("index ", index, " item ", item);
   return item !== search;
});

console.log(abc);
