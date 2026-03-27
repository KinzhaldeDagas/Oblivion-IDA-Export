0x897880: push    esi
0x897881: mov     esi, [esp+4+arg_0]
0x897885: push    edi
0x897886: push    esi
0x897887: mov     edi, ecx
0x897889: call    sub_711D20
0x89788E: test    al, al
0x897890: jz      short loc_8978CA
0x897892: mov     ecx, [edi+10h]
0x897895: test    ecx, ecx
0x897897: jz      short loc_8978B6
0x897899: mov     eax, [esi+10h]
0x89789C: mov     edx, [ecx]
0x89789E: push    eax
0x89789F: mov     eax, [edx+2Ch]
0x8978A2: call    eax
0x8978A4: mov     cx, [esi+0Ch]
0x8978A8: cmp     cx, [edi+0Ch]
0x8978AC: pop     edi
0x8978AD: setz    dl
0x8978B0: and     al, dl
0x8978B2: pop     esi
0x8978B3: retn    4
0x8978B6: cmp     dword ptr [esi+10h], 0
0x8978BA: mov     cx, [esi+0Ch]
0x8978BE: setz    al
0x8978C1: cmp     cx, [edi+0Ch]
0x8978C5: setz    dl
0x8978C8: and     al, dl
0x8978CA: pop     edi
0x8978CB: pop     esi
0x8978CC: retn    4
