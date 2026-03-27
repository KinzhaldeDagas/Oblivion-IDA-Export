0x6AA4D0: push    0FFFFFFFFh
0x6AA4D2: push    offset ??1?$NiTPointerList@PAVSoundMessage@AudioManager@@@@UAE@XZ_SEH
0x6AA4D7: mov     eax, large fs:0
0x6AA4DD: push    eax
0x6AA4DE: push    ecx
0x6AA4DF: push    esi
0x6AA4E0: mov     eax, ds:0B30AACh
0x6AA4E5: xor     eax, esp
0x6AA4E7: push    eax
0x6AA4E8: lea     eax, [esp+18h+var_C]
0x6AA4EC: mov     large fs:0, eax
0x6AA4F2: mov     esi, ecx
0x6AA4F4: mov     [esp+18h+var_10], esi
0x6AA4F8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVSoundMessage@AudioManager@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,AudioManager::SoundMessage *>::`vftable'
0x6AA4FE: mov     [esp+18h+var_4], 0
0x6AA506: call    NiTPointerList__FreeAllNodes
0x6AA50B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVSoundMessage@AudioManager@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,AudioManager::SoundMessage *>::`vftable'
0x6AA511: mov     ecx, [esp+18h+var_C]
0x6AA515: mov     large fs:0, ecx
0x6AA51C: pop     ecx
0x6AA51D: pop     esi
0x6AA51E: add     esp, 10h
0x6AA521: retn
