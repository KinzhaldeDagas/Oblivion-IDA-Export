0x509110: sub     esp, 30h
0x509113: mov     edx, [esp+30h+l]
0x509117: fldz
0x509119: push    ebx
0x50911A: fstp    [esp+34h+var_28]
0x50911E: mov     ebx, [esp+34h+a4]
0x509122: lea     eax, [esp+34h+var_28]
0x509126: push    eax
0x509127: mov     eax, [esp+38h+arg_10]
0x50912B: lea     ecx, [esp+38h+anonymous_0+3]
0x50912F: push    ecx; UInt16
0x509130: mov     ecx, [esp+3Ch+arg_C]
0x509134: push    edx; l
0x509135: mov     edx, [esp+40h+a3]
0x509139: push    eax; a6
0x50913A: mov     eax, [esp+44h+arg_4]
0x50913E: push    ecx; a5
0x50913F: mov     ecx, [esp+48h+a1]
0x509143: push    ebx; a4
0x509144: push    edx; a3
0x509145: push    eax; a2
0x509146: push    ecx; a1
0x509147: call    Script_ExtractArgs
0x50914C: add     esp, 24h
0x50914F: test    al, al
0x509151: jnz     short loc_509158
0x509153: pop     ebx
0x509154: add     esp, 30h
0x509157: retn
0x509158: test    ebx, ebx
0x50915A: jz      loc_50920C
0x509160: fld     [esp+34h+var_28]
0x509164: movsx   eax, byte ptr [esp+34h+anonymous_0+3]
0x509169: sub     eax, 58h ; 'X'
0x50916C: fmul    qword ptr ds:0A31C78h
0x509172: fstp    [esp+34h+var_2C]
0x509176: jz      short loc_5091A4
0x509178: sub     eax, 1
0x50917B: jz      short loc_509193
0x50917D: sub     eax, 1
0x509180: jnz     short loc_5091B3
0x509182: fld     [esp+34h+var_2C]
0x509186: push    ecx
0x509187: mov     ecx, ebx
0x509189: fstp    [esp+38h+var_38]; float
0x50918C: call    sub_4D8A10
0x509191: jmp     short loc_5091B3
0x509193: fld     [esp+34h+var_2C]
0x509197: push    ecx
0x509198: mov     ecx, ebx
0x50919A: fstp    [esp+38h+var_38]; float
0x50919D: call    sub_4D89F0
0x5091A2: jmp     short loc_5091B3
0x5091A4: fld     [esp+34h+var_2C]
0x5091A8: push    ecx
0x5091A9: mov     ecx, ebx
0x5091AB: fstp    [esp+38h+var_38]; float
0x5091AE: call    sub_4D89D0
0x5091B3: mov     edx, [ebx]
0x5091B5: mov     eax, [edx+154h]
0x5091BB: push    ebp
0x5091BC: mov     ecx, ebx
0x5091BE: call    eax
0x5091C0: mov     ebp, eax
0x5091C2: test    ebp, ebp
0x5091C4: jz      short loc_50920B
0x5091C6: push    esi
0x5091C7: push    edi
0x5091C8: lea     ecx, [esp+44h+var_28]
0x5091CC: push    ecx
0x5091CD: mov     ecx, ebx
0x5091CF: call    sub_4D7AF0
0x5091D4: mov     esi, eax
0x5091D6: push    1
0x5091D8: lea     edi, [ebp+30h]
0x5091DB: mov     ecx, 9
0x5091E0: push    ebp
0x5091E1: rep movsd
0x5091E3: call    sub_897A20
0x5091E8: mov     edx, [ebx]
0x5091EA: mov     eax, [edx+164h]
0x5091F0: add     esp, 8
0x5091F3: mov     ecx, ebx
0x5091F5: call    eax
0x5091F7: test    eax, eax
0x5091F9: pop     edi
0x5091FA: pop     esi
0x5091FB: jnz     short loc_50920B
0x5091FD: fldz
0x5091FF: push    eax; a3
0x509200: push    ecx
0x509201: fstp    [esp+44h+a2]; a2
0x509204: mov     ecx, ebp; this
0x509206: call    NiAVObject_UpdateNiAVObject
0x50920B: pop     ebp
0x50920C: mov     al, 1
0x50920E: pop     ebx
0x50920F: add     esp, 30h
0x509212: retn
