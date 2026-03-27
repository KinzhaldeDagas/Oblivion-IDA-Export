0x740720: sub     esp, 8
0x740723: push    ebx
0x740724: push    ebp
0x740725: push    esi
0x740726: push    edi
0x740727: mov     ebx, ecx
0x740729: call    sub_70C120
0x74072E: mov     ecx, [ebx+0B4h]
0x740734: mov     ebp, [ecx+5Ch]
0x740737: mov     [esp+18h+var_4], ecx
0x74073B: call    sub_7403B0
0x740740: lea     esi, [ebx+64h]
0x740743: lea     edi, [ebp+30h]
0x740746: mov     ecx, 9
0x74074B: rep movsd
0x74074D: mov     eax, [ebx+88h]
0x740753: mov     [ebp+54h], eax
0x740756: mov     ecx, [ebx+8Ch]
0x74075C: mov     eax, [ebp+0]
0x74075F: mov     [ebp+58h], ecx
0x740762: mov     edx, [ebx+90h]
0x740768: mov     [ebp+5Ch], edx
0x74076B: mov     edx, [eax+60h]
0x74076E: fld     dword ptr [ebx+94h]
0x740774: push    0
0x740776: fabs
0x740778: push    ecx
0x740779: fstp    [esp+20h+var_8]
0x74077D: mov     ecx, ebp
0x74077F: fld     [esp+20h+var_8]
0x740783: fstp    dword ptr [ebp+60h]
0x740786: fld     dword ptr [ebx+0C0h]
0x74078C: fstp    [esp+20h+var_20]
0x74078F: call    edx
0x740791: mov     esi, [esp+18h+var_4]
0x740795: cmp     byte ptr [esi+60h], 0
0x740799: jz      short loc_7407AD
0x74079B: mov     ecx, ebx; this
0x74079D: call    NiAVObject_InitializePropertyState
0x7407A2: mov     ecx, ebx
0x7407A4: call    NiNode_UpdateDynamicEffectState
0x7407A9: mov     byte ptr [esi+60h], 0
0x7407AD: pop     edi
0x7407AE: pop     esi
0x7407AF: pop     ebp
0x7407B0: pop     ebx
0x7407B1: add     esp, 8
0x7407B4: retn
