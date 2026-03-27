0x79F568: push    eax; jumptable 0079F39F default case
0x79F569: push    offset aMalformedFrond; "malformed frond texture information (to"...
0x79F56E: lea     esi, [esp+8+arg_A4]
0x79F575: call    sub_7A54A0
0x79F57A: add     esp, 8
0x79F57D: push    ebx
0x79F57E: push    eax
0x79F57F: lea     ecx, [esp+8+arg_54]
0x79F583: mov     [esp+8+arg_114], 3
0x79F58B: call    sub_789190
0x79F590: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x79F595: lea     ecx, [esp+4+arg_54]
0x79F599: push    ecx
0x79F59A: call    ThrowException??
