0x4030F0: sub     esp, 1Ch
0x4030F3: mov     eax, dword ptr [esp+1Ch+whichJoystick]
0x4030F7: fld     [esp+1Ch+deadzonePercent]
0x4030FB: mov     ecx, [ecx+eax*4+8]
0x4030FF: fmul    ds:dbl_A2FA98
0x403105: xor     eax, eax
0x403107: fnstcw  word ptr [esp+1Ch+whichJoystick]
0x40310B: mov     [esp+1Ch+var_8], eax
0x40310F: mov     [esp+1Ch+var_C], eax
0x403113: movzx   eax, word ptr [esp+1Ch+whichJoystick]
0x403118: or      eax, 0C00h
0x40311D: mov     [esp+1Ch+deadzonePercent], eax
0x403121: mov     [esp+1Ch+var_14], 14h
0x403129: mov     [esp+1Ch+var_10], 10h
0x403131: fldcw   word ptr [esp+1Ch+deadzonePercent]
0x403135: fistp   [esp+1Ch+var_1C]
0x403138: mov     edx, dword ptr [esp+1Ch+var_1C]
0x40313B: mov     [esp+1Ch+var_4], edx
0x40313F: mov     eax, [ecx]
0x403141: mov     eax, [eax+18h]
0x403144: fldcw   word ptr [esp+1Ch+whichJoystick]
0x403148: lea     edx, [esp+1Ch+var_14]
0x40314C: push    edx
0x40314D: push    5
0x40314F: push    ecx
0x403150: call    eax
0x403152: add     esp, 1Ch
0x403155: retn    8
