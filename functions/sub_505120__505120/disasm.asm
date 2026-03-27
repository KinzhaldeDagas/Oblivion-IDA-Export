0x505120: sub     esp, 208h
0x505126: mov     eax, ds:0B30AACh
0x50512B: xor     eax, esp
0x50512D: mov     [esp+208h+var_4], eax
0x505134: mov     edx, [esp+208h+arg_C]
0x50513B: mov     ecx, [esp+208h+arg_4]
0x505142: mov     eax, [esp+208h+a1]
0x505149: push    ebx
0x50514A: mov     ebx, [esp+20Ch+l]
0x505151: push    ebp
0x505152: mov     ebp, [esp+210h+arg_1C]
0x505159: push    esi
0x50515A: mov     esi, [esp+214h+a4]
0x505161: push    edi
0x505162: mov     edi, [esp+218h+arg_10]
0x505169: mov     [esp+218h+a3], ebp
0x50516D: lea     ebp, [esp+218h+var_204]
0x505171: push    ebp; UInt16
0x505172: push    ebx; l
0x505173: push    edi; a6
0x505174: push    edx; a5
0x505175: mov     edx, [esp+228h+a3]
0x505179: push    esi; a4
0x50517A: push    edx; a3
0x50517B: push    ecx; a2
0x50517C: push    eax; a1
0x50517D: call    Script_ExtractArgs
0x505182: add     esp, 20h
0x505185: test    al, al
0x505187: jz      short loc_5051B2
0x505189: test    esi, esi
0x50518B: jz      short loc_5051B0
0x50518D: mov     eax, [esi]
0x50518F: mov     edx, [eax+13Ch]
0x505195: push    0
0x505197: mov     ecx, esi
0x505199: call    edx
0x50519B: test    eax, eax
0x50519D: jz      short loc_5051B0
0x50519F: mov     edx, [eax]
0x5051A1: mov     edx, [edx+0D8h]
0x5051A7: lea     ecx, [esp+218h+var_204]
0x5051AB: push    ecx
0x5051AC: mov     ecx, eax
0x5051AE: call    edx
0x5051B0: mov     al, 1
0x5051B2: mov     ecx, [esp+218h+var_4]
0x5051B9: pop     edi
0x5051BA: pop     esi
0x5051BB: pop     ebp
0x5051BC: pop     ebx
0x5051BD: xor     ecx, esp
0x5051BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5051C4: add     esp, 208h
0x5051CA: retn
