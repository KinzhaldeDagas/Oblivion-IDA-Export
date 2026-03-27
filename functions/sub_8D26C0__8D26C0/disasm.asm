0x8D26C0: push    0FFFFFFFFh
0x8D26C2: push    offset SEH_8D26C0
0x8D26C7: mov     eax, large fs:0
0x8D26CD: push    eax
0x8D26CE: push    ecx
0x8D26CF: push    esi
0x8D26D0: push    edi
0x8D26D1: mov     eax, ds:0B30AACh
0x8D26D6: xor     eax, esp
0x8D26D8: push    eax
0x8D26D9: lea     eax, [esp+1Ch+var_C]
0x8D26DD: mov     large fs:0, eax
0x8D26E3: mov     esi, ecx
0x8D26E5: mov     [esp+1Ch+var_10], esi
0x8D26E9: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8D26EE: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8D26F4: mov     edi, 1
0x8D26F9: xor     eax, eax
0x8D26FB: mov     [esi+0Ch], eax
0x8D26FE: mov     [esi+10h], eax
0x8D2701: add     ds:0BA7D70h, edi
0x8D2707: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8D270D: add     ds:0BA7F44h, edi
0x8D2713: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8D2719: add     ds:0BA7F50h, edi
0x8D271F: mov     dword ptr [esi], offset ??_7bhkConvexVerticesShape@@6B@; const bhkConvexVerticesShape::`vftable'
0x8D2725: add     ds:0BA814Ch, edi
0x8D272B: mov     [esp+1Ch+var_4], eax
0x8D272F: mov     eax, [esp+1Ch+arg_0]
0x8D2733: push    eax
0x8D2734: mov     ecx, esi
0x8D2736: mov     dword ptr [esi], offset ??_7bhkCharControllerShape@@6B@; const bhkCharControllerShape::`vftable'
0x8D273C: call    sub_8D25A0
0x8D2741: add     ds:0BA814Ch, edi
0x8D2747: mov     eax, esi
0x8D2749: mov     ecx, [esp+1Ch+var_C]
0x8D274D: mov     large fs:0, ecx
0x8D2754: pop     ecx
0x8D2755: pop     edi
0x8D2756: pop     esi
0x8D2757: add     esp, 10h
0x8D275A: retn    4
