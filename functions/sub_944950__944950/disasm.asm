0x944950: push    ebp
0x944951: mov     ebp, esp
0x944953: and     esp, 0FFFFFFF0h
0x944956: sub     esp, 50h
0x944959: mov     eax, [ebp+arg_8]
0x94495C: mov     edx, [ebp+arg_0]
0x94495F: mov     [ecx], eax
0x944961: mov     eax, [ebp+arg_4]
0x944964: mov     [ecx+30h], edx
0x944967: fld     dword ptr [eax]
0x944969: fsub    dword ptr [edx+10h]
0x94496C: fmul    dword ptr [edx+1Ch]
0x94496F: fstp    [esp+50h+var_48]
0x944973: fld     [esp+50h+var_48]
0x944977: fistp   [esp+50h+var_44]
0x94497B: mov     edx, [esp+50h+var_44]
0x94497F: dec     edx
0x944980: mov     [ecx+20h], edx
0x944983: fld     dword ptr [eax+10h]
0x944986: mov     edx, [ecx+30h]
0x944989: fsub    dword ptr [edx+10h]
0x94498C: fmul    dword ptr [edx+1Ch]
0x94498F: fstp    [esp+50h+var_44]
0x944993: fld     [esp+50h+var_44]
0x944997: fistp   [esp+50h+var_48]
0x94499B: mov     edx, [esp+50h+var_48]
0x94499F: inc     edx
0x9449A0: mov     [ecx+10h], edx
0x9449A3: fld     dword ptr [eax+4]
0x9449A6: mov     edx, [ecx+30h]
0x9449A9: fsub    dword ptr [edx+14h]
0x9449AC: fmul    dword ptr [edx+1Ch]
0x9449AF: fstp    [esp+50h+var_44]
0x9449B3: fld     [esp+50h+var_44]
0x9449B7: fistp   [esp+50h+var_48]
0x9449BB: mov     edx, [esp+50h+var_48]
0x9449BF: dec     edx
0x9449C0: mov     [ecx+24h], edx
0x9449C3: fld     dword ptr [eax+14h]
0x9449C6: mov     edx, [ecx+30h]
0x9449C9: fsub    dword ptr [edx+14h]
0x9449CC: fmul    dword ptr [edx+1Ch]
0x9449CF: fstp    [esp+50h+var_44]
0x9449D3: fld     [esp+50h+var_44]
0x9449D7: fistp   [esp+50h+var_48]
0x9449DB: mov     edx, [esp+50h+var_48]
0x9449DF: inc     edx
0x9449E0: mov     [ecx+14h], edx
0x9449E3: fld     dword ptr [eax+8]
0x9449E6: mov     edx, [ecx+30h]
0x9449E9: fsub    dword ptr [edx+18h]
0x9449EC: fmul    dword ptr [edx+1Ch]
0x9449EF: fstp    [esp+50h+var_44]
0x9449F3: fld     [esp+50h+var_44]
0x9449F7: fistp   [esp+50h+var_48]
0x9449FB: mov     edx, [esp+50h+var_48]
0x9449FF: dec     edx
0x944A00: mov     [ecx+28h], edx
0x944A03: fld     dword ptr [eax+18h]
0x944A06: mov     edx, [ecx+30h]
0x944A09: fsub    dword ptr [edx+18h]
0x944A0C: fmul    dword ptr [edx+1Ch]
0x944A0F: fstp    [esp+50h+var_44]
0x944A13: fld     [esp+50h+var_44]
0x944A17: fistp   [esp+50h+var_48]
0x944A1B: movsx   edx, word ptr [ecx+22h]
0x944A1F: mov     eax, [esp+50h+var_48]
0x944A23: mov     [esp+50h+var_30], edx
0x944A27: movsx   edx, word ptr [ecx+12h]
0x944A2B: inc     eax
0x944A2C: inc     edx
0x944A2D: mov     [esp+50h+var_40], edx
0x944A31: movsx   edx, word ptr [ecx+26h]
0x944A35: mov     [esp+50h+var_2C], edx
0x944A39: movsx   edx, word ptr [ecx+16h]
0x944A3D: mov     [ecx+18h], eax
0x944A40: inc     edx
0x944A41: sar     eax, 10h
0x944A44: inc     eax
0x944A45: mov     [esp+50h+var_3C], edx
0x944A49: movsx   edx, word ptr [ecx+2Ah]
0x944A4D: mov     [esp+50h+var_38], eax
0x944A51: xor     eax, eax
0x944A53: mov     [esp+50h+var_28], edx
0x944A57: mov     [esp+50h+var_20], eax
0x944A5B: mov     [esp+50h+var_1C], eax
0x944A5F: mov     [esp+50h+var_18], eax
0x944A63: mov     [esp+50h+var_14], eax
0x944A67: mov     [esp+50h+var_10], eax
0x944A6B: mov     [esp+50h+var_C], eax
0x944A6F: mov     eax, [ecx+30h]
0x944A72: mov     edx, [eax+20h]
0x944A75: push    edx
0x944A76: lea     eax, [esp+54h+var_40]
0x944A7A: push    eax
0x944A7B: call    sub_944060
0x944A80: mov     esp, ebp
0x944A82: pop     ebp
0x944A83: retn    0Ch
