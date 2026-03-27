0x7A7610: push    0FFFFFFFFh
0x7A7612: push    offset SEH_7A7610
0x7A7617: mov     eax, large fs:0
0x7A761D: push    eax
0x7A761E: push    ecx
0x7A761F: push    ebx
0x7A7620: push    esi
0x7A7621: push    edi
0x7A7622: mov     eax, ds:0B30AACh
0x7A7627: xor     eax, esp
0x7A7629: push    eax
0x7A762A: lea     eax, [esp+20h+var_C]
0x7A762E: mov     large fs:0, eax
0x7A7634: mov     esi, ecx
0x7A7636: fld     dword ptr ds:0A3744Ch
0x7A763C: xor     ebx, ebx
0x7A763E: fst     dword ptr [esi+8]
0x7A7641: push    5Ch ; '\'; Size
0x7A7643: fld1
0x7A7645: mov     dword ptr [esi], 6
0x7A764B: fst     dword ptr [esi+0Ch]
0x7A764E: mov     dword ptr [esi+4], 3
0x7A7655: fst     dword ptr [esi+14h]
0x7A7658: mov     byte ptr [esi+1Ch], 1
0x7A765C: fst     dword ptr [esi+18h]
0x7A765F: mov     [esi+1Dh], bl
0x7A7662: fxch    st(1)
0x7A7664: mov     [esi+1Eh], bl
0x7A7667: fst     dword ptr [esi+10h]
0x7A766A: mov     [esi+28h], ebx
0x7A766D: fldz
0x7A766F: mov     [esi+50h], ebx
0x7A7672: fstp    dword ptr [esi+20h]
0x7A7675: mov     [esi+54h], ebx
0x7A7678: fxch    st(1)
0x7A767A: mov     [esi+58h], ebx
0x7A767D: fst     dword ptr [esi+24h]
0x7A7680: mov     [esi+5Ch], ebx
0x7A7683: fst     dword ptr [esi+2Ch]
0x7A7686: mov     [esi+60h], ebx
0x7A7689: fld     dword ptr ds:0A37CC8h
0x7A768F: mov     [esi+64h], ebx
0x7A7692: fstp    dword ptr [esi+30h]
0x7A7695: mov     [esi+68h], ebx
0x7A7698: fld     dword ptr ds:0A31C80h
0x7A769E: mov     [esi+6Ch], ebx
0x7A76A1: fstp    dword ptr [esi+34h]
0x7A76A4: mov     [esi+70h], ebx
0x7A76A7: fst     dword ptr [esi+38h]
0x7A76AA: fld     dword ptr ds:0A3D65Ch
0x7A76B0: fstp    dword ptr [esi+3Ch]
0x7A76B3: fld     dword ptr ds:0A41304h
0x7A76B9: fstp    dword ptr [esi+40h]
0x7A76BC: fxch    st(1)
0x7A76BE: fstp    dword ptr [esi+44h]
0x7A76C1: fld     dword ptr ds:0A2FAACh
0x7A76C7: fstp    dword ptr [esi+48h]
0x7A76CA: fstp    dword ptr [esi+4Ch]
0x7A76CD: call    FormHeapAlloc
0x7A76D2: add     esp, 4
0x7A76D5: mov     [esp+20h+var_10], eax
0x7A76D9: cmp     eax, ebx
0x7A76DB: mov     [esp+20h+var_4], ebx
0x7A76DF: jz      short loc_7A76EA
0x7A76E1: mov     ecx, eax
0x7A76E3: call    sub_785BE0
0x7A76E8: jmp     short loc_7A76EC
0x7A76EA: xor     eax, eax
0x7A76EC: or      edi, 0FFFFFFFFh
0x7A76EF: push    5Ch ; '\'; Size
0x7A76F1: mov     [esp+24h+var_4], edi
0x7A76F5: mov     [esi+58h], eax
0x7A76F8: call    FormHeapAlloc
0x7A76FD: add     esp, 4
0x7A7700: mov     [esp+20h+var_10], eax
0x7A7704: cmp     eax, ebx
0x7A7706: mov     [esp+20h+var_4], 1
0x7A770E: jz      short loc_7A7719
0x7A7710: mov     ecx, eax
0x7A7712: call    sub_785BE0
0x7A7717: jmp     short loc_7A771B
0x7A7719: xor     eax, eax
0x7A771B: push    5Ch ; '\'; Size
0x7A771D: mov     [esp+24h+var_4], edi
0x7A7721: mov     [esi+54h], eax
0x7A7724: call    FormHeapAlloc
0x7A7729: add     esp, 4
0x7A772C: mov     [esp+20h+var_10], eax
0x7A7730: cmp     eax, ebx
0x7A7732: mov     [esp+20h+var_4], 2
0x7A773A: jz      short loc_7A7745
0x7A773C: mov     ecx, eax
0x7A773E: call    sub_785BE0
0x7A7743: jmp     short loc_7A7747
0x7A7745: xor     eax, eax
0x7A7747: push    5Ch ; '\'; Size
0x7A7749: mov     [esp+24h+var_4], edi
0x7A774D: mov     [esi+64h], eax
0x7A7750: call    FormHeapAlloc
0x7A7755: add     esp, 4
0x7A7758: mov     [esp+20h+var_10], eax
0x7A775C: cmp     eax, ebx
0x7A775E: mov     [esp+20h+var_4], 3
0x7A7766: jz      short loc_7A7771
0x7A7768: mov     ecx, eax
0x7A776A: call    sub_785BE0
0x7A776F: jmp     short loc_7A7773
0x7A7771: xor     eax, eax
0x7A7773: push    5Ch ; '\'; Size
0x7A7775: mov     [esp+24h+var_4], edi
0x7A7779: mov     [esi+6Ch], eax
0x7A777C: call    FormHeapAlloc
0x7A7781: add     esp, 4
0x7A7784: mov     [esp+20h+var_10], eax
0x7A7788: cmp     eax, ebx
0x7A778A: mov     [esp+20h+var_4], 4
0x7A7792: jz      short loc_7A779D
0x7A7794: mov     ecx, eax
0x7A7796: call    sub_785BE0
0x7A779B: jmp     short loc_7A779F
0x7A779D: xor     eax, eax
0x7A779F: push    5Ch ; '\'; Size
0x7A77A1: mov     [esp+24h+var_4], edi
0x7A77A5: mov     [esi+68h], eax
0x7A77A8: call    FormHeapAlloc
0x7A77AD: add     esp, 4
0x7A77B0: mov     [esp+20h+var_10], eax
0x7A77B4: cmp     eax, ebx
0x7A77B6: mov     [esp+20h+var_4], 5
0x7A77BE: jz      short loc_7A77DF
0x7A77C0: mov     ecx, eax
0x7A77C2: call    sub_785BE0
0x7A77C7: mov     [esi+60h], eax
0x7A77CA: mov     eax, esi
0x7A77CC: mov     ecx, [esp+20h+var_C]
0x7A77D0: mov     large fs:0, ecx
0x7A77D7: pop     ecx
0x7A77D8: pop     edi
0x7A77D9: pop     esi
0x7A77DA: pop     ebx
0x7A77DB: add     esp, 10h
0x7A77DE: retn
0x7A77DF: mov     [esi+60h], ebx
0x7A77E2: mov     eax, esi
0x7A77E4: mov     ecx, [esp+20h+var_C]
0x7A77E8: mov     large fs:0, ecx
0x7A77EF: pop     ecx
0x7A77F0: pop     edi
0x7A77F1: pop     esi
0x7A77F2: pop     ebx
0x7A77F3: add     esp, 10h
0x7A77F6: retn
