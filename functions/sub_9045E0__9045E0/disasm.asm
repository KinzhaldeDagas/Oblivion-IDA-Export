0x9045E0: push    ebp
0x9045E1: mov     ebp, esp
0x9045E3: and     esp, 0FFFFFFF0h
0x9045E6: sub     esp, 54h
0x9045E9: mov     ecx, ds:0BA9DE4h
0x9045EF: push    ebx
0x9045F0: mov     ebx, large fs:2Ch
0x9045F7: mov     eax, [ebx+ecx*4]
0x9045FA: mov     edx, [eax+1A4h]
0x904600: push    esi
0x904601: cmp     edx, [eax+1A8h]
0x904607: push    edi
0x904608: jnb     short loc_90462E
0x90460A: mov     esi, eax
0x90460C: mov     ecx, [esi+1A4h]
0x904612: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x904618: rdtsc
0x90461A: mov     [esp+60h+var_54], eax
0x90461E: mov     eax, [esp+60h+var_54]
0x904622: mov     [ecx+4], eax
0x904625: add     ecx, 0Ch
0x904628: mov     [esi+1A4h], ecx
0x90462E: mov     esi, [ebp+arg_0]
0x904631: mov     edi, [esi]
0x904633: mov     edx, [esi+8]
0x904636: lea     ecx, [edi+20h]
0x904639: push    ecx
0x90463A: push    edx
0x90463B: lea     ecx, [esp+68h+var_40]
0x90463F: call    sub_8B1F70
0x904644: mov     [esp+60h+var_44], esi
0x904648: lea     eax, [esp+60h+var_40]
0x90464C: mov     [esp+60h+var_48], eax
0x904650: mov     ecx, [edi+0Ch]
0x904653: mov     edx, [esi+4]
0x904656: mov     [esp+60h+var_4C], edx
0x90465A: mov     [esp+60h+var_50], ecx
0x90465E: mov     eax, [ecx]
0x904660: call    dword ptr [eax+8]
0x904663: mov     edi, [ebp+arg_4]
0x904666: mov     ecx, [edi]
0x904668: mov     edx, [ecx]
0x90466A: mov     esi, eax
0x90466C: call    dword ptr [edx+8]
0x90466F: mov     edx, [ebp+arg_8]
0x904672: mov     ecx, [edx]
0x904674: shl     esi, 5
0x904677: add     esi, ecx
0x904679: movzx   eax, byte ptr [esi+eax+190h]
0x904681: mov     esi, [ebp+arg_C]
0x904684: push    esi
0x904685: push    edx
0x904686: lea     edx, [esp+68h+var_50]
0x90468A: push    edi
0x90468B: lea     eax, [eax+eax*4]
0x90468E: push    edx
0x90468F: call    dword ptr [ecx+eax*4+998h]
0x904696: mov     ecx, ds:0BA9DE4h
0x90469C: mov     eax, [ebx+ecx*4]
0x90469F: mov     edx, [eax+1A4h]
0x9046A5: mov     esi, [eax+1A8h]
0x9046AB: add     esp, 10h
0x9046AE: cmp     edx, esi
0x9046B0: jnb     short loc_9046D6
0x9046B2: mov     ebx, eax
0x9046B4: mov     esi, [ebx+1A4h]
0x9046BA: mov     dword ptr [esi], offset aEt; "Et"
0x9046C0: rdtsc
0x9046C2: mov     [esp+60h+var_54], eax
0x9046C6: mov     eax, [esp+60h+var_54]
0x9046CA: mov     [esi+4], eax
0x9046CD: add     esi, 0Ch
0x9046D0: mov     [ebx+1A4h], esi
0x9046D6: pop     edi
0x9046D7: pop     esi
0x9046D8: pop     ebx
0x9046D9: mov     esp, ebp
0x9046DB: pop     ebp
0x9046DC: retn
