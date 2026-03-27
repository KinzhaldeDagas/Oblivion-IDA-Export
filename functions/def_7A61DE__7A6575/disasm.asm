0x7A6575: push    21h ; '!'; jumptable 007A61DE default case
0x7A6577: push    offset aMalformedSingl; "malformed single leaf information"
0x7A657C: lea     ecx, [esp+8+arg_90]
0x7A6583: mov     [esp+8+arg_A8], ebp
0x7A658A: mov     [esp+8+arg_A4], ebx
0x7A6591: mov     [esp+8+arg_94], bl
0x7A6598: call    sub_414500
0x7A659D: push    ebx
0x7A659E: lea     ecx, [esp+4+arg_90]
0x7A65A5: push    ecx
0x7A65A6: lea     ecx, [esp+8+arg_E4]
0x7A65AD: mov     [esp+8+arg_194], 4
0x7A65B5: call    sub_789190
0x7A65BA: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A65BF: lea     edx, [esp+4+arg_E4]
0x7A65C6: push    edx
0x7A65C7: call    ThrowException??
