0x721370: push    0FFFFFFFFh
0x721372: push    offset NiExtraData_ctor_SEH
0x721377: mov     eax, large fs:0
0x72137D: push    eax
0x72137E: push    ecx
0x72137F: push    ebx
0x721380: push    esi
0x721381: push    edi
0x721382: mov     eax, ds:0B30AACh
0x721387: xor     eax, esp
0x721389: push    eax
0x72138A: lea     eax, [esp+20h+var_C]
0x72138E: mov     large fs:0, eax
0x721394: mov     edi, ecx
0x721396: mov     [esp+20h+var_10], edi
0x72139A: call    NiObject_constr
0x72139F: mov     ebx, [esp+20h+arg_0]
0x7213A3: test    ebx, ebx
0x7213A5: mov     [esp+20h+var_4], 0
0x7213AD: mov     dword ptr [edi], offset ??_7NiExtraData@@6B@; const NiExtraData::`vftable'
0x7213B3: jz      short loc_7213F4
0x7213B5: mov     eax, ebx
0x7213B7: lea     edx, [eax+1]
0x7213BA: lea     ebx, [ebx+0]
0x7213C0: mov     cl, [eax]
0x7213C2: add     eax, 1
0x7213C5: test    cl, cl
0x7213C7: jnz     short loc_7213C0
0x7213C9: sub     eax, edx
0x7213CB: jz      short loc_7213F4
0x7213CD: mov     eax, ebx
0x7213CF: lea     edx, [eax+1]
0x7213D2: mov     cl, [eax]
0x7213D4: add     eax, 1
0x7213D7: test    cl, cl
0x7213D9: jnz     short loc_7213D2
0x7213DB: sub     eax, edx
0x7213DD: lea     esi, [eax+1]
0x7213E0: push    esi; Size
0x7213E1: call    FormHeapAlloc
0x7213E6: push    ebx; Src
0x7213E7: push    esi; SizeInBytes
0x7213E8: push    eax; Dst
0x7213E9: mov     [edi+8], eax
0x7213EC: call    _strcpy_s
0x7213F1: add     esp, 10h
0x7213F4: mov     eax, edi
0x7213F6: mov     ecx, [esp+20h+var_C]
0x7213FA: mov     large fs:0, ecx
0x721401: pop     ecx
0x721402: pop     edi
0x721403: pop     esi
0x721404: pop     ebx
0x721405: add     esp, 10h
0x721408: retn    4
