0x93F0E0: push    ebp
0x93F0E1: mov     ebp, esp
0x93F0E3: and     esp, 0FFFFFFF0h
0x93F0E6: sub     esp, 44h
0x93F0E9: mov     eax, [ebp+arg_8]
0x93F0EC: push    ebx
0x93F0ED: mov     ebx, [ebp+arg_0]
0x93F0F0: push    esi
0x93F0F1: mov     esi, ecx
0x93F0F3: mov     [esi+8], eax
0x93F0F6: mov     eax, [ebp+arg_4]
0x93F0F9: mov     word ptr [esi+6], 1
0x93F0FF: mov     dword ptr [esi], offset off_AA1E18
0x93F105: mov     edx, [eax+8]
0x93F108: mov     ecx, [ebx]
0x93F10A: push    edi
0x93F10B: mov     edi, [eax]
0x93F10D: mov     eax, [ebx+8]
0x93F110: push    edx
0x93F111: mov     [esp+54h+var_44], ecx
0x93F115: push    eax
0x93F116: lea     ecx, [esp+58h+var_40]
0x93F11A: call    sub_8B1FF0
0x93F11F: mov     edx, [edi]
0x93F121: mov     ecx, edi
0x93F123: call    dword ptr [edx+8]
0x93F126: cmp     eax, 6
0x93F129: jnz     short loc_93F140
0x93F12B: mov     ecx, [esp+50h+var_44]
0x93F12F: lea     eax, [esp+50h+var_40]
0x93F133: push    eax
0x93F134: push    edi
0x93F135: push    ecx
0x93F136: lea     ecx, [esi+0Ch]
0x93F139: call    sub_93EF30
0x93F13E: jmp     short loc_93F153
0x93F140: mov     eax, [esp+50h+var_44]
0x93F144: lea     edx, [esp+50h+var_40]
0x93F148: push    edx
0x93F149: push    edi
0x93F14A: push    eax
0x93F14B: lea     ecx, [esi+0Ch]
0x93F14E: call    sub_93EE40
0x93F153: mov     eax, 0BF800000h
0x93F158: xorps   xmm0, xmm0
0x93F15B: movaps  xmmword ptr [esi+20h], xmm0
0x93F15F: mov     [esi+2Ch], eax
0x93F162: mov     [esi+18h], eax
0x93F165: mov     ecx, [ebx+0Ch]
0x93F168: test    ecx, ecx
0x93F16A: mov     eax, ebx
0x93F16C: jz      short loc_93F179
0x93F16E: mov     edi, edi
0x93F170: mov     eax, ecx
0x93F172: mov     ecx, [eax+0Ch]
0x93F175: test    ecx, ecx
0x93F177: jnz     short loc_93F170
0x93F179: mov     ecx, [eax+20h]
0x93F17C: mov     [esp+50h+var_44], ecx
0x93F180: mov     ecx, [ebp+arg_4]
0x93F183: mov     eax, [ecx+0Ch]
0x93F186: test    eax, eax
0x93F188: jz      short loc_93F199
0x93F18A: lea     ebx, [ebx+0]
0x93F190: mov     ecx, eax
0x93F192: mov     eax, [ecx+0Ch]
0x93F195: test    eax, eax
0x93F197: jnz     short loc_93F190
0x93F199: fld     dword ptr [ecx+20h]
0x93F19C: fld     [esp+50h+var_44]
0x93F1A0: fcomp   st(1)
0x93F1A2: fnstsw  ax
0x93F1A4: test    ah, 5
0x93F1A7: jp      short loc_93F1AF
0x93F1A9: fstp    st
0x93F1AB: fld     [esp+50h+var_44]
0x93F1AF: pop     edi
0x93F1B0: fstp    dword ptr [esi+1Ch]
0x93F1B3: mov     eax, esi
0x93F1B5: pop     esi
0x93F1B6: pop     ebx
0x93F1B7: mov     esp, ebp
0x93F1B9: pop     ebp
0x93F1BA: retn    0Ch
