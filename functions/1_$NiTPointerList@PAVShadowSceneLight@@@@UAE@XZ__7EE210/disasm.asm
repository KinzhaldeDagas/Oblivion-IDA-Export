0x7EE210: push    0FFFFFFFFh
0x7EE212: push    offset ??1?$NiTPointerList@PAVShadowSceneLight@@@@UAE@XZ_SEH
0x7EE217: mov     eax, large fs:0
0x7EE21D: push    eax
0x7EE21E: push    ecx
0x7EE21F: push    esi
0x7EE220: mov     eax, ds:0B30AACh
0x7EE225: xor     eax, esp
0x7EE227: push    eax
0x7EE228: lea     eax, [esp+18h+var_C]
0x7EE22C: mov     large fs:0, eax
0x7EE232: mov     esi, ecx
0x7EE234: mov     [esp+18h+var_10], esi
0x7EE238: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVShadowSceneLight@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,ShadowSceneLight *>::`vftable'
0x7EE23E: mov     [esp+18h+var_4], 0
0x7EE246: call    NiTPointerList__FreeAllNodes
0x7EE24B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowSceneLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ShadowSceneLight *>::`vftable'
0x7EE251: mov     ecx, [esp+18h+var_C]
0x7EE255: mov     large fs:0, ecx
0x7EE25C: pop     ecx
0x7EE25D: pop     esi
0x7EE25E: add     esp, 10h
0x7EE261: retn
