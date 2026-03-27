0x73BB90: push    0FFFFFFFFh
0x73BB92: push    offset ??0NiTextureEffect@@QAE@XZ_SEH
0x73BB97: mov     eax, large fs:0
0x73BB9D: push    eax
0x73BB9E: push    ecx
0x73BB9F: push    ebx
0x73BBA0: push    ebp
0x73BBA1: push    esi
0x73BBA2: push    edi
0x73BBA3: mov     eax, ds:0B30AACh
0x73BBA8: xor     eax, esp
0x73BBAA: push    eax
0x73BBAB: lea     eax, [esp+24h+var_C]
0x73BBAF: mov     large fs:0, eax
0x73BBB5: mov     ebp, ecx
0x73BBB7: mov     [esp+24h+var_10], ebp
0x73BBBB: call    ??0NiDynamicEffect@@QAE@XZ; NiDynamicEffect::NiDynamicEffect(void)
0x73BBC0: fldz
0x73BBC2: mov     dword ptr [ebp+0], offset ??_7NiTextureEffect@@6B@; const NiTextureEffect::`vftable'
0x73BBC9: lea     edi, [ebp+0DCh]
0x73BBCF: mov     ecx, 9
0x73BBD4: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x73BBD9: rep movsd
0x73BBDB: fst     dword ptr [ebp+100h]
0x73BBE1: fst     dword ptr [ebp+104h]
0x73BBE7: fst     dword ptr [ebp+108h]
0x73BBED: lea     edi, [ebp+10Ch]
0x73BBF3: mov     ecx, 9
0x73BBF8: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x73BBFD: rep movsd
0x73BBFF: fst     dword ptr [ebp+130h]
0x73BC05: fst     dword ptr [ebp+134h]
0x73BC0B: fst     dword ptr [ebp+138h]
0x73BC11: xor     ebx, ebx
0x73BC13: mov     [esp+24h+var_4], ebx
0x73BC17: mov     [ebp+13Ch], ebx
0x73BC1D: push    ecx
0x73BC1E: lea     ecx, [ebp+154h]
0x73BC24: fstp    [esp+28h+var_28]; float
0x73BC27: push    offset dword_B258D0; int
0x73BC2C: mov     byte ptr [esp+2Ch+var_4], 1
0x73BC31: call    sub_716DE0
0x73BC36: fldz
0x73BC38: push    ecx
0x73BC39: fstp    [esp+28h+var_28]; float
0x73BC3C: lea     ecx, [ebp+164h]
0x73BC42: push    offset dword_B258D0; int
0x73BC47: call    sub_716DE0
0x73BC4C: mov     [ebp+140h], ebx
0x73BC52: mov     dword ptr [ebp+144h], 3
0x73BC5C: mov     [ebp+148h], ebx
0x73BC62: mov     [ebp+14Ch], ebx
0x73BC68: mov     [ebp+150h], bl
0x73BC6E: mov     eax, ebp
0x73BC70: mov     ecx, [esp+24h+var_C]
0x73BC74: mov     large fs:0, ecx
0x73BC7B: pop     ecx
0x73BC7C: pop     edi
0x73BC7D: pop     esi
0x73BC7E: pop     ebp
0x73BC7F: pop     ebx
0x73BC80: add     esp, 10h
0x73BC83: retn
