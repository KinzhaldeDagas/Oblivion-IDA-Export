0x713030: push    0FFFFFFFFh
0x713032: push    offset SEH_713030
0x713037: mov     eax, large fs:0
0x71303D: push    eax
0x71303E: sub     esp, 10h
0x713041: push    ebx
0x713042: push    esi
0x713043: push    edi
0x713044: mov     eax, ds:0B30AACh
0x713049: xor     eax, esp
0x71304B: push    eax
0x71304C: lea     eax, [esp+2Ch+var_C]
0x713050: mov     large fs:0, eax
0x713056: mov     ebx, ecx
0x713058: mov     eax, [ebx+21Ch]
0x71305E: push    1
0x713060: lea     ecx, [esp+30h+var_18]
0x713064: push    ecx
0x713065: push    4
0x713067: lea     edx, [esp+38h+var_1C]
0x71306B: push    edx
0x71306C: push    eax
0x71306D: mov     eax, [eax+4]
0x713070: mov     [esp+40h+var_18], 4
0x713078: call    eax
0x71307A: mov     eax, [esp+40h+var_1C]
0x71307E: add     eax, 1
0x713081: add     esp, 14h
0x713084: lea     esi, [ebx+0C8h]
0x71308A: push    eax
0x71308B: mov     ecx, esi
0x71308D: mov     [esp+30h+var_1C], eax
0x713091: call    NiTArray_SetSize
0x713096: lea     ecx, [esp+2Ch+var_18]
0x71309A: push    ecx
0x71309B: push    0
0x71309D: mov     ecx, esi
0x71309F: mov     [esp+34h+var_18], 0
0x7130A7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7130AC: mov     edi, 1
0x7130B1: cmp     [esp+2Ch+var_1C], edi
0x7130B5: jbe     loc_71315F
0x7130BB: mov     eax, [ebx+21Ch]
0x7130C1: push    1
0x7130C3: lea     edx, [esp+30h+var_14]
0x7130C7: push    edx
0x7130C8: mov     edx, [eax+4]
0x7130CB: push    4
0x7130CD: lea     ecx, [esp+38h+Size]
0x7130D1: push    ecx
0x7130D2: push    eax
0x7130D3: mov     [esp+40h+var_14], 4
0x7130DB: call    edx
0x7130DD: push    10h; Size
0x7130DF: call    FormHeapAlloc
0x7130E4: add     esp, 18h
0x7130E7: mov     [esp+2Ch+var_14], eax
0x7130EB: test    eax, eax
0x7130ED: mov     [esp+2Ch+var_4], 0
0x7130F5: jz      short loc_713105
0x7130F7: mov     ecx, [esp+2Ch+Size]
0x7130FB: push    ecx; Size
0x7130FC: mov     ecx, eax
0x7130FE: call    sub_7329D0
0x713103: jmp     short loc_713107
0x713105: xor     eax, eax
0x713107: movzx   edx, word ptr [esi+0Ah]
0x71310B: cmp     edi, edx
0x71310D: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x713115: jb      short loc_713129
0x713117: test    eax, eax
0x713119: lea     ecx, [edi+1]
0x71311C: mov     [esi+0Ah], cx
0x713120: jz      short loc_71314C
0x713122: add     word ptr [esi+0Ch], 1
0x713127: jmp     short loc_71314C
0x713129: test    eax, eax
0x71312B: jz      short loc_71313D
0x71312D: mov     edx, [esi+4]
0x713130: cmp     dword ptr [edx+edi*4], 0
0x713134: jnz     short loc_71314C
0x713136: add     word ptr [esi+0Ch], 1
0x71313B: jmp     short loc_71314C
0x71313D: mov     ecx, [esi+4]
0x713140: cmp     dword ptr [ecx+edi*4], 0
0x713144: jz      short loc_71314C
0x713146: add     word ptr [esi+0Ch], 0FFFFh
0x71314C: mov     edx, [esi+4]
0x71314F: mov     [edx+edi*4], eax
0x713152: add     edi, 1
0x713155: cmp     edi, [esp+2Ch+var_1C]
0x713159: jb      loc_7130BB
0x71315F: mov     ecx, [esp+2Ch+var_C]
0x713163: mov     large fs:0, ecx
0x71316A: pop     ecx
0x71316B: pop     edi
0x71316C: pop     esi
0x71316D: pop     ebx
0x71316E: add     esp, 1Ch
0x713171: retn
