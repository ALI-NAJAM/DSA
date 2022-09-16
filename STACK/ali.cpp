
INCLUDE Irvine32.inc

    ; .data is used for declaring and defining variables
.data
num1			DWORD ?
num2			DWORD ?
num3			DWORD ?
num4			DWORD ?
num5			DWORD ?
num6			DWORD ?
num7			DWORD ?
num8			DWORD ?
codeTitle		BYTE "  ---------   MADE BY ALI & AQSA   ---------  ", 0
calculator		BYTE "  ---------  SIMPLE CALCULATOR ( +, -, *, / )  ---------  ", 0
star            BYTE " *********************************************************** ",0
directions		BYTE "Enter 2 numbers for addition.", 0
directions1		BYTE "Enter 2 numbers for subraction.", 0
directions2		BYTE "Enter 2 numbers for multiplication.", 0
directions3		BYTE "Enter 2 numbers for division.", 0
prompt1			BYTE "First number: ", 0
prompt2			BYTE "Second number: ", 0
prompt3			BYTE "First number: ", 0
prompt4			BYTE "Second number: ", 0
prompt5			BYTE "First number: ", 0
prompt6			BYTE "Second number: ", 0
prompt7			BYTE "First number: ", 0
prompt8			BYTE "Second number: ", 0
msg             BYTE "SUM OF TWO NUMBERS IS  ",0
msg1            BYTE "SUB OF TWO NUMBERS IS  ",0
msg2            BYTE "MUL OF TWO NUMBERS IS  ",0
msg3            BYTE "DIV OF TWO NUMBERS IS  ",0
remaintxt		BYTE " remainder ", 0
equals			BYTE " = ", 0
plus			BYTE " + ", 0
minus			BYTE " - ", 0
times			BYTE " * ", 0
divide			BYTE " / ", 0
total           DWORD ?
total1          DWORD ?
total2          DWORD ?
total3          DWORD ?
remainder		DWORD ?





; .code is for the executable part of the program
.code
main PROC

;
set color in console
    mov eax,
    green
        call SetTextColor

    ;
Output tode title and author
    mov edx,
    OFFSET codeTitle
        call WriteString
            call CrLf
                call CrLf
                    call CrLf

    ;
Output
    mov edx,
    OFFSET calculator
        call WriteString
            call CrLf
                call CrLf
                    call CrLf

    ;
Output
    mov edx,
    OFFSET directions
        call WriteString
            call CrLf
                call CrLf

    ; Prompt for the first number
		mov		edx, OFFSET prompt1
		call	WriteString
		call	ReadInt
		mov		num1, eax

	; Prompt for the second number
		mov		edx, OFFSET prompt2
		call	WriteString
		call	ReadInt
		mov		num2, eax
	call CrLf
	call CrLf
	;
Add the two numbers using the eax registry
    mov eax,
    num1
        add eax,
    num2
        mov total,
    eax

    ;
Print the Message
    mov edx,
    offset msg
        call writestring;
Print the total to the console;
Print num1
    mov eax,
    num1
        call WriteDec;
Print the plus sign
    mov edx,
    OFFSET plus
        call WriteString;
Print num2
    mov eax,
    num2
        call WriteDec;
Print the equals sign

    mov edx,
    OFFSET equals
        call WriteString;
Print out the total
    mov eax,
    total
        call WriteDec
            call CrLf
                call CrLf
                    mov edx,
    OFFSET star
        call WriteString;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -call CrLf
                                                                                                                                                    call CrLf

    ;
Output tode numbers and author
    mov edx,
    OFFSET directions1
        call WriteString
            call CrLf
                call CrLf

    ; Prompt for the first number
		mov		edx, OFFSET prompt3
		call	WriteString
		call	ReadInt
		mov		num3, eax

	; Prompt for the second number
		mov		edx, OFFSET prompt4
		call	WriteString
		call	ReadInt
		mov		num4, eax
	call CrLf
	call CrLf
;
SUB the two numbers using the eax registry
    mov eax,
    num3
        add eax,
    num4
        mov total,
    eax

    ;
SUB the two numbers using the eax registry
    mov eax,
    num3
        sub eax,
    num4
        mov total1,
    eax

        mov edx,
    offset msg1
        call writestring

    ;
Print the total to the console;
Print num3
    mov eax,
    num3
        call WriteDec;
Print the minus sign
    mov edx,
    OFFSET minus
        call WriteString;
Print num4
    mov eax,
    num4
        call WriteDec;
Print the equals sign
    mov edx,
    OFFSET equals
        call WriteString;
Print out the total1
    mov eax,
    total1
        call WriteDec

            call CrLf
                call CrLf
                    mov edx,
    OFFSET star
        call WriteString;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -call CrLf
                                                                                                                                                    call CrLf

    ;
Output tode numbers and author
    mov edx,
    OFFSET directions2
        call WriteString
            call CrLf
                call CrLf

    ; Prompt for the first number
		mov		edx, OFFSET prompt5
		call	WriteString
		call	ReadInt
		mov		num5, eax

	; Prompt for the second number
		mov		edx, OFFSET prompt6
		call	WriteString
		call	ReadInt
		mov		num6, eax
		call	CrLf
		call	CrLf

;
Multiply the two numbers using the eax registry
    mov eax,
    num5
        mov ebx,
    num6
        mul ebx
            mov total2,
    eax

    ;
Print the Message
    mov edx,
    offset msg2
        call writestring
            call CrLf
                call CrLf;
Print the total2 to the console;
Print num5
    mov eax,
    num5
        call WriteDec;
Print the multiply sign
    mov edx,
    OFFSET times
        call WriteString;
Print num6
    mov eax,
    num6
        call WriteDec;
Print the equals sign
    mov edx,
    OFFSET equals
        call WriteString;
Print out the total2
    mov eax,
    total2
        call WriteDec

            call CrLf
                call CrLf
                    mov edx,
    OFFSET star
        call WriteString;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -call CrLf
                                                                                                                                                    call CrLf;
division the two numbers using the eax registry

    ;
Output tode numbers and author
    mov edx,
    OFFSET directions3
        call WriteString
            call CrLf
                call CrLf; Prompt for the first number
		mov		edx, OFFSET prompt7
		call	WriteString
		call	ReadInt
		mov		num7, eax

	; Prompt for the second number
		mov		edx, OFFSET prompt8
		call	WriteString
		call	ReadInt
		mov		num8, eax
	call CrLf
	call CrLf

		;
Perform the calculation
    mov eax,
    num7
        mov ebx,
    num8 xor edx, edx div ebx mov total3, eax mov remainder, edx call CrLf

    ;
Print the Message
    mov edx,
    offset msg3
        call writestring;
Print the total3 to the console;
Print num7
    mov eax,
    num7
        call WriteDec;
Print the divide sign
    mov edx,
    OFFSET divide
        call WriteString;
Print num8
    mov eax,
    num8
        call WriteDec;
Print the equals sign
    mov edx,
    OFFSET equals
        call WriteString;
Print out the total3
    mov eax,
    total3
        call WriteDec
            mov edx,
    OFFSET remaintxt
        call WriteString
            mov eax,
    remainder
        call WriteDec
            call CrLf
                call CrLf
                    mov edx,
    OFFSET star
        call WriteString;
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -call CrLf
                                                                                                                                                    call CrLf

                                                                                                                                                        exit
                                                                                                                                                            main ENDP
                                                                                                                                                                END main
