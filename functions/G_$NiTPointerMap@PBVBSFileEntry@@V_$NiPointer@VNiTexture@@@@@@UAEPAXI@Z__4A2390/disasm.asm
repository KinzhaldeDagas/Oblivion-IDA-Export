0x4A2390: push    esi
0x4A2391: mov     esi, ecx
0x4A2393: call    ??1?$NiTPointerMap@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@UAE@XZ; NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::~NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(void)
0x4A2398: test    [esp+4+arg_0], 1
0x4A239D: jz      short loc_4A23A8
0x4A239F: push    esi
0x4A23A0: call    FormHeapFree
0x4A23A5: add     esp, 4
0x4A23A8: mov     eax, esi
0x4A23AA: pop     esi
0x4A23AB: retn    4
