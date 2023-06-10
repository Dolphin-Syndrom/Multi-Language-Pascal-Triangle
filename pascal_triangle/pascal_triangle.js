const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter size of triangle: ', (userInput) => {
  var n = parseInt(userInput);

  rl.question('Enter character value for triangle: ', (userInput) => {
    var x = parseInt(userInput);
    var ch = String.fromCharCode(x);

    for (var i = 0; i <= n; i++) {
      var end = '';

      for (var j = 0; j <= n - i; j++) {
        end += ' ';
      }
      
      for (var j = 1; j <= i; j++) {
        end += ch;
        end += ' ';
      }

      console.log(end);
    }

    rl.close();
  });
});
