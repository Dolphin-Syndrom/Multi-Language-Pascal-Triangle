import 'dart:io';

void main() {
  print('Enter size of the triangle: ');
  int size = int.parse(stdin.readLineSync()!);

  print('Enter character ASCII value for the triangle: ');
  String input = stdin.readLineSync()!;
  int charCode = input.codeUnitAt(0);

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size-1; j++) {
      stdout.write(' ');
    }
    for (int j = 0; j < i+1; j++) {
      stdout.write('${String.fromCharCode(charCode)} ');
    }
    stdout.writeln();
  }
}
