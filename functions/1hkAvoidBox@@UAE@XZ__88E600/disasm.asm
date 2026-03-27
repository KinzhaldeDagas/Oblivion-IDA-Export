0x88E600: push    0FFFFFFFFh
0x88E602: push    offset ??1hkAvoidBox@@UAE@XZ_SEH
0x88E607: mov     eax, large fs:0
0x88E60D: push    eax
0x88E60E: push    ecx
0x88E60F: push    esi
0x88E610: push    edi
0x88E611: mov     eax, ds:0B30AACh
0x88E616: xor     eax, esp
0x88E618: push    eax
0x88E619: lea     eax, [esp+1Ch+var_C]
0x88E61D: mov     large fs:0, eax
0x88E623: mov     edi, ecx
0x88E625: mov     [esp+1Ch+var_10], edi
0x88E629: mov     esi, [edi+0B0h]
0x88E62F: test    esi, esi
0x88E631: mov     [esp+1Ch+var_4], 1
0x88E639: jz      short loc_88E657
0x88E63B: lea     eax, [esi+4]
0x88E63E: push    eax; lpAddend
0x88E63F: call    dword ptr ds:0A2807Ch
0x88E645: test    eax, eax
0x88E647: jnz     short loc_88E657
0x88E649: test    esi, esi
0x88E64B: jz      short loc_88E657
0x88E64D: mov     edx, [esi]
0x88E64F: mov     eax, [edx]
0x88E651: push    1
0x88E653: mov     ecx, esi
0x88E655: call    eax
0x88E657: mov     eax, [edi+0A8h]
0x88E65D: test    eax, eax
0x88E65F: mov     byte ptr [esp+1Ch+var_4], 0
0x88E664: js      short loc_88E69E
0x88E666: mov     ecx, ds:0BA9DE4h
0x88E66C: mov     edx, large fs:2Ch
0x88E673: mov     ecx, [edx+ecx*4]
0x88E676: mov     ecx, [ecx+19Ch]
0x88E67C: test    ecx, ecx
0x88E67E: jnz     short loc_88E686
0x88E680: mov     ecx, ds:0BA7D9Ch
0x88E686: mov     edx, [edi+0A0h]
0x88E68C: and     eax, 3FFFFFFFh
0x88E691: add     eax, eax
0x88E693: push    14h
0x88E695: add     eax, eax
0x88E697: push    eax
0x88E698: push    edx
0x88E699: call    sub_8A75D0
0x88E69E: mov     ecx, edi
0x88E6A0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x88E6A8: call    sub_8CDAA0
0x88E6AD: mov     ecx, dword ptr [esp+1Ch+var_C]
0x88E6B1: mov     large fs:0, ecx
0x88E6B8: pop     ecx
0x88E6B9: pop     edi
0x88E6BA: pop     esi
0x88E6BB: add     esp, 10h
0x88E6BE: retn
