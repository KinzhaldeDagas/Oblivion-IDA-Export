0x4B5370: push    ebx
0x4B5371: mov     ebx, [esp+4+Dst]
0x4B5375: push    esi
0x4B5376: push    edi
0x4B5377: mov     edi, [esp+0Ch+Size]
0x4B537B: push    edi; a3
0x4B537C: push    ebx; Dst
0x4B537D: mov     esi, ecx
0x4B537F: call    TESForm_LoadModifiedForm
0x4B5384: push    edi; Size
0x4B5385: push    ebx; Dst
0x4B5386: lea     ecx, [esi+70h]
0x4B5389: call    TESValueForm_LoadModified
0x4B538E: test    bl, 4
0x4B5391: jz      short loc_4B53A7
0x4B5393: mov     ecx, ds:0B33B00h
0x4B5399: push    1; Size
0x4B539B: add     esi, 89h ; '‰'
0x4B53A1: push    esi; Dst
0x4B53A2: call    SaveLoad_LoadData
0x4B53A7: pop     edi
0x4B53A8: pop     esi
0x4B53A9: pop     ebx
0x4B53AA: retn    8
