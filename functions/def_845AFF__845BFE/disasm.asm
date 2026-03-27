0x845BFE: mov     eax, ds:0B42E8Ch; jumptable 00845AFF default case
0x845C03: test    eax, eax
0x845C05: jz      short loc_845C1F
0x845C07: push    0; _DWORD
0x845C09: fstp    st(1)
0x845C0B: push    offset aInvalidSubText; "Invalid sub texture in decal"
0x845C10: fstp    st
0x845C12: call    eax ; dword_B42E8C
0x845C14: fld     dword ptr ds:0A3D65Ch
0x845C1A: fldz
0x845C1C: add     esp, 8
0x845C1F: fxch    st(1)
0x845C21: mov     eax, [esp+arg_1C]
0x845C25: add     [esp+arg_10], 40h ; '@'
0x845C2A: add     eax, 1
0x845C2D: add     ebx, 10h
0x845C30: cmp     eax, ds:0B42E88h
0x845C36: mov     [esp+arg_1C], eax
0x845C3A: jge     short loc_845C56
0x845C3C: mov     ecx, [esp+arg_F8]
0x845C43: fstp    st
0x845C45: fstp    st
0x845C47: call    sub_7EE1F0
0x845C4C: fldz
0x845C4E: mov     ebp, eax
0x845C50: fld     dword ptr ds:0A3D65Ch
0x845C56: test    ebp, ebp
0x845C58: mov     edi, [esp+arg_24]
0x845C5C: jnz     loc_8459BC
0x845C62: mov     ebx, [esp+arg_14]
0x845C66: fstp    st
0x845C68: fstp    st
0x845C6A: fild    [esp+arg_1C]
0x845C6E: mov     esi, 1
0x845C73: mov     [esp+arg_14], ebx
0x845C77: fstp    dword ptr ds:0B4615Ch
0x845C7D: add     [ebx+60h], esi
0x845C80: mov     ecx, [edi+38h]
0x845C83: lea     eax, [esp+arg_14]
0x845C87: push    eax
0x845C88: push    ecx
0x845C89: lea     ecx, [edi+40h]
0x845C8C: mov     [esp+8+arg_E4], 0
0x845C97: call    sub_76CE40
0x845C9C: or      eax, 0FFFFFFFFh
0x845C9F: add     [ebx+60h], eax
0x845CA2: mov     [esp+arg_E4], eax
0x845CA9: jnz     short loc_845CB2
0x845CAB: mov     ecx, ebx
0x845CAD: call    sub_7604D0
0x845CB2: add     [edi+38h], esi
0x845CB5: mov     ecx, [esp+arg_DC]
0x845CBC: mov     large fs:0, ecx
0x845CC3: pop     ecx
0x845CC4: pop     edi
0x845CC5: pop     esi
0x845CC6: pop     ebp
0x845CC7: pop     ebx
0x845CC8: add     esp, 0D8h
0x845CCE: retn    10h
