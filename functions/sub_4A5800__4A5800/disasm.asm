0x4A5800: push    esi
0x4A5801: push    edi
0x4A5802: mov     edi, [esp+8+arg_0]
0x4A5806: test    edi, edi
0x4A5808: mov     esi, ecx
0x4A580A: jz      loc_4A5922
0x4A5810: mov     eax, [edi]
0x4A5812: mov     edx, [eax+0Ch]
0x4A5815: mov     ecx, edi
0x4A5817: call    edx
0x4A5819: cmp     eax, 3
0x4A581C: jnz     loc_4A5922
0x4A5822: cmp     [esp+8+arg_4], 0
0x4A5827: jz      loc_4A5922
0x4A582D: cmp     byte ptr [esi+5], 0
0x4A5831: jz      short loc_4A5858
0x4A5833: mov     al, [edi+4]
0x4A5836: mov     [esi+4], al
0x4A5839: movzx   ecx, byte ptr [edi+6]
0x4A583D: push    ecx
0x4A583E: mov     ecx, esi
0x4A5840: call    sub_4A3520
0x4A5845: push    0
0x4A5847: add     edi, 8
0x4A584A: push    edi
0x4A584B: lea     ecx, [esi+8]
0x4A584E: call    sub_4EED80
0x4A5853: pop     edi
0x4A5854: pop     esi
0x4A5855: retn    8
0x4A5858: cmp     byte ptr [edi+5], 0
0x4A585C: jnz     loc_4A5922
0x4A5862: cmp     byte ptr [esi+4], 0
0x4A5866: mov     al, [edi+4]
0x4A5869: jz      short loc_4A5889
0x4A586B: test    al, al
0x4A586D: jz      loc_4A5922
0x4A5873: mov     dl, [edi+6]
0x4A5876: cmp     dl, [esi+6]
0x4A5879: jbe     loc_4A5922
0x4A587F: mov     [esi+4], al
0x4A5882: movzx   eax, byte ptr [edi+6]
0x4A5886: push    eax
0x4A5887: jmp     short loc_4A583E
0x4A5889: test    al, al
0x4A588B: jnz     short loc_4A5836
0x4A588D: push    1
0x4A588F: lea     edx, [edi+8]
0x4A5892: push    edx
0x4A5893: lea     ecx, [esi+8]
0x4A5896: call    sub_4EED80
0x4A589B: movzx   ecx, byte ptr [edi+6]
0x4A589F: movzx   eax, byte ptr [esi+6]
0x4A58A3: mov     edi, eax
0x4A58A5: mov     edx, 64h ; 'd'
0x4A58AA: imul    edi, eax
0x4A58AD: sub     edx, eax
0x4A58AF: imul    edx, ecx
0x4A58B2: add     edx, edi
0x4A58B4: mov     [esp+8+arg_0], edx
0x4A58B8: mov     edx, 64h ; 'd'
0x4A58BD: sub     edx, ecx
0x4A58BF: fild    [esp+8+arg_0]
0x4A58C3: imul    edx, eax
0x4A58C6: mov     eax, ecx
0x4A58C8: imul    eax, ecx
0x4A58CB: add     edx, eax
0x4A58CD: mov     [esp+8+arg_0], edx
0x4A58D1: push    ecx
0x4A58D2: fiadd   [esp+0Ch+arg_0]
0x4A58D6: fstp    [esp+0Ch+arg_0]
0x4A58DA: fld     [esp+0Ch+arg_0]
0x4A58DE: fmul    qword ptr ds:0A40048h
0x4A58E4: fstp    [esp+0Ch+arg_0]
0x4A58E8: fld     [esp+0Ch+arg_0]
0x4A58EC: fstp    [esp+0Ch+var_C]; float
0x4A58EF: call    sub_4842F0
0x4A58F4: fnstcw  word ptr [esp+0Ch+arg_0]
0x4A58F8: add     esp, 4
0x4A58FB: movzx   eax, word ptr [esp+8+arg_0]
0x4A5900: or      eax, 0C00h
0x4A5905: mov     [esp+8+arg_4], eax
0x4A5909: fldcw   word ptr [esp+8+arg_4]
0x4A590D: fistp   [esp+8+arg_4]
0x4A5911: movzx   ecx, byte ptr [esp+8+arg_4]
0x4A5916: push    ecx
0x4A5917: mov     ecx, esi
0x4A5919: fldcw   word ptr [esp+0Ch+arg_0]
0x4A591D: call    sub_4A3520
0x4A5922: pop     edi
0x4A5923: pop     esi
0x4A5924: retn    8
