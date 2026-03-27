0x88C330: push    esi
0x88C331: mov     esi, ecx
0x88C333: test    esi, esi
0x88C335: jz      short loc_88C38F
0x88C337: mov     eax, [esi]
0x88C339: mov     edx, [eax+58h]
0x88C33C: call    edx
0x88C33E: test    eax, eax
0x88C340: jz      short loc_88C38F
0x88C342: cmp     dword ptr [esi+1Ch], 0
0x88C346: jbe     short loc_88C393
0x88C348: cmp     dword ptr [esi+44h], 0C8h ; 'È'
0x88C34F: jb      short loc_88C36D
0x88C351: mov     ecx, esi
0x88C353: call    sub_889E20
0x88C358: mov     ecx, esi
0x88C35A: call    sub_88AD90
0x88C35F: mov     ecx, esi
0x88C361: call    sub_88A080
0x88C366: mov     ecx, esi
0x88C368: call    sub_88A120
0x88C36D: mov     eax, [esp+4+arg_0]
0x88C371: cmp     word ptr [eax+4], 0
0x88C376: mov     ecx, 1
0x88C37B: jz      short loc_88C381
0x88C37D: add     [eax+6], cx
0x88C381: mov     edx, [esi+44h]
0x88C384: push    edi
0x88C385: mov     edi, [esi+40h]
0x88C388: mov     [edi+edx*4], eax
0x88C38B: add     [esi+44h], ecx
0x88C38E: pop     edi
0x88C38F: pop     esi
0x88C390: retn    4
0x88C393: mov     edx, [esp+4+arg_0]
0x88C397: test    edx, edx
0x88C399: jz      short loc_88C38F
0x88C39B: cmp     dword ptr [edx+8], 0
0x88C39F: jnz     short loc_88C38F
0x88C3A1: mov     esi, [edx+10h]
0x88C3A4: test    esi, esi
0x88C3A6: jz      short loc_88C3AE
0x88C3A8: cmp     dword ptr [esi+54h], 0
0x88C3AC: jz      short loc_88C38F
0x88C3AE: mov     esi, [edx+14h]
0x88C3B1: test    esi, esi
0x88C3B3: jz      short loc_88C3BB
0x88C3B5: cmp     dword ptr [esi+54h], 0
0x88C3B9: jz      short loc_88C38F
0x88C3BB: pop     esi
0x88C3BC: mov     [esp+arg_0], edx
0x88C3C0: mov     ecx, eax
0x88C3C2: jmp     sub_8988A0
