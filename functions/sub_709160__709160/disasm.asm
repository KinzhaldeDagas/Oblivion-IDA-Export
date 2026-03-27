0x709160: sub     esp, 4Ch
0x709163: mov     eax, ds:0B30AACh
0x709168: xor     eax, esp
0x70916A: mov     [esp+4Ch+var_4], eax
0x70916E: push    ebx
0x70916F: push    esi
0x709170: mov     esi, [esp+54h+arg_0]
0x709174: push    edi
0x709175: mov     edi, ecx
0x709177: push    esi
0x709178: mov     [esp+5Ch+var_48], edi
0x70917C: call    sub_7086B0
0x709181: mov     eax, ds:0B3FA88h
0x709186: push    eax; ArgList
0x709187: call    TESOutput_PrintString
0x70918C: movzx   ebx, word ptr [esi+0Ah]
0x709190: movzx   ecx, word ptr [esi+8]
0x709194: add     esp, 4
0x709197: cmp     ebx, ecx
0x709199: mov     dword ptr [esp+58h+ArgList], eax
0x70919D: jb      short loc_7091AD
0x70919F: movzx   edx, word ptr [esi+0Eh]
0x7091A3: add     edx, ebx
0x7091A5: push    edx
0x7091A6: mov     ecx, esi
0x7091A8: call    NiTArray_SetSize
0x7091AD: lea     eax, [esp+58h+ArgList]
0x7091B1: push    eax
0x7091B2: push    ebx
0x7091B3: mov     ecx, esi
0x7091B5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7091BA: cmp     dword ptr [edi+0C8h], 0
0x7091C1: jz      loc_709329
0x7091C7: mov     ebx, [edi+0C0h]
0x7091CD: test    ebx, ebx
0x7091CF: push    ebp
0x7091D0: mov     dword ptr [esp+5Ch+ArgList], 0
0x7091D8: jz      loc_70927C
0x7091DE: mov     edi, edi
0x7091E0: mov     ecx, dword ptr [esp+5Ch+ArgList]
0x7091E4: mov     edi, [ebx+8]
0x7091E7: push    ecx; ArgList
0x7091E8: push    offset aAffectedNodeD; "affected node[%d]"
0x7091ED: lea     eax, [ebx+8]
0x7091F0: mov     ebx, [ebx]
0x7091F2: lea     edx, [esp+64h+DstBuf]
0x7091F6: push    40h ; '@'; SizeInBytes
0x7091F8: push    edx; DstBuf
0x7091F9: call    sub_6C5D40
0x7091FE: lea     eax, [esp+6Ch+DstBuf]
0x709202: push    edi; int
0x709203: push    eax; ArgList
0x709204: call    TESOutput_PrintLabeledPointer
0x709209: movzx   edi, word ptr [esi+0Ah]
0x70920D: movzx   ecx, word ptr [esi+8]
0x709211: add     esp, 18h
0x709214: cmp     edi, ecx
0x709216: mov     ebp, eax
0x709218: jb      short loc_709228
0x70921A: movzx   edx, word ptr [esi+0Eh]
0x70921E: add     edx, edi
0x709220: push    edx
0x709221: mov     ecx, esi
0x709223: call    NiTArray_SetSize
0x709228: movzx   eax, word ptr [esi+0Ah]
0x70922C: cmp     edi, eax
0x70922E: jb      short loc_709242
0x709230: test    ebp, ebp
0x709232: lea     ecx, [edi+1]
0x709235: mov     [esi+0Ah], cx
0x709239: jz      short loc_709265
0x70923B: add     word ptr [esi+0Ch], 1
0x709240: jmp     short loc_709265
0x709242: test    ebp, ebp
0x709244: jz      short loc_709256
0x709246: mov     edx, [esi+4]
0x709249: cmp     dword ptr [edx+edi*4], 0
0x70924D: jnz     short loc_709265
0x70924F: add     word ptr [esi+0Ch], 1
0x709254: jmp     short loc_709265
0x709256: mov     eax, [esi+4]
0x709259: cmp     dword ptr [eax+edi*4], 0
0x70925D: jz      short loc_709265
0x70925F: add     word ptr [esi+0Ch], 0FFFFh
0x709265: mov     ecx, [esi+4]
0x709268: add     dword ptr [esp+5Ch+ArgList], 1
0x70926D: test    ebx, ebx
0x70926F: mov     [ecx+edi*4], ebp
0x709272: jnz     loc_7091E0
0x709278: mov     edi, [esp+5Ch+var_48]
0x70927C: mov     ebx, [edi+0D0h]
0x709282: test    ebx, ebx
0x709284: jz      loc_709328
0x70928A: lea     ebx, [ebx+0]
0x709290: mov     edx, dword ptr [esp+5Ch+ArgList]
0x709294: mov     edi, [ebx+8]
0x709297: push    edx; ArgList
0x709298: lea     eax, [ebx+8]
0x70929B: mov     ebx, [ebx]
0x70929D: push    offset aUnaffectedNode; "unaffected node[%d]"
0x7092A2: lea     eax, [esp+64h+DstBuf]
0x7092A6: push    40h ; '@'; SizeInBytes
0x7092A8: push    eax; DstBuf
0x7092A9: call    sub_6C5D40
0x7092AE: lea     ecx, [esp+6Ch+DstBuf]
0x7092B2: push    edi; int
0x7092B3: push    ecx; ArgList
0x7092B4: call    TESOutput_PrintLabeledPointer
0x7092B9: movzx   edi, word ptr [esi+0Ah]
0x7092BD: movzx   edx, word ptr [esi+8]
0x7092C1: add     esp, 18h
0x7092C4: cmp     edi, edx
0x7092C6: mov     ebp, eax
0x7092C8: jb      short loc_7092D8
0x7092CA: movzx   eax, word ptr [esi+0Eh]
0x7092CE: add     eax, edi
0x7092D0: push    eax
0x7092D1: mov     ecx, esi
0x7092D3: call    NiTArray_SetSize
0x7092D8: movzx   ecx, word ptr [esi+0Ah]
0x7092DC: cmp     edi, ecx
0x7092DE: jb      short loc_7092F2
0x7092E0: test    ebp, ebp
0x7092E2: lea     edx, [edi+1]
0x7092E5: mov     [esi+0Ah], dx
0x7092E9: jz      short loc_709315
0x7092EB: add     word ptr [esi+0Ch], 1
0x7092F0: jmp     short loc_709315
0x7092F2: test    ebp, ebp
0x7092F4: jz      short loc_709306
0x7092F6: mov     eax, [esi+4]
0x7092F9: cmp     dword ptr [eax+edi*4], 0
0x7092FD: jnz     short loc_709315
0x7092FF: add     word ptr [esi+0Ch], 1
0x709304: jmp     short loc_709315
0x709306: mov     ecx, [esi+4]
0x709309: cmp     dword ptr [ecx+edi*4], 0
0x70930D: jz      short loc_709315
0x70930F: add     word ptr [esi+0Ch], 0FFFFh
0x709315: mov     edx, [esi+4]
0x709318: add     dword ptr [esp+5Ch+ArgList], 1
0x70931D: test    ebx, ebx
0x70931F: mov     [edx+edi*4], ebp
0x709322: jnz     loc_709290
0x709328: pop     ebp
0x709329: mov     ecx, [esp+58h+var_4]
0x70932D: pop     edi
0x70932E: pop     esi
0x70932F: pop     ebx
0x709330: xor     ecx, esp
0x709332: call    @__security_check_cookie@4; __security_check_cookie(x)
0x709337: add     esp, 4Ch
0x70933A: retn    4
