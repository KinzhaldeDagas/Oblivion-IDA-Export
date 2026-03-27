0x618350: push    0FFFFFFFFh
0x618352: push    offset ??1?$NiTPointerMap@IPAVTESGameSoundHandle@@@@UAE@XZ_SEH
0x618357: mov     eax, large fs:0
0x61835D: push    eax
0x61835E: push    ecx
0x61835F: push    esi
0x618360: mov     eax, ds:0B30AACh
0x618365: xor     eax, esp
0x618367: push    eax
0x618368: lea     eax, [esp+18h+var_C]
0x61836C: mov     large fs:0, eax
0x618372: mov     esi, ecx
0x618374: mov     [esp+18h+var_10], esi
0x618378: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVTESGameSoundHandle@@@@6B@; const NiTPointerMap<uint,TESGameSoundHandle *>::`vftable'
0x61837E: mov     [esp+18h+var_4], 0
0x618386: call    NiTMap_Clear
0x61838B: mov     ecx, esi
0x61838D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x618395: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESGameSoundHandle@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGameSoundHandle *>::`vftable'
0x61839B: call    NiTMap_Clear
0x6183A0: mov     eax, [esi+8]
0x6183A3: push    eax
0x6183A4: call    FormHeapFree
0x6183A9: add     esp, 4
0x6183AC: mov     ecx, [esp+18h+var_C]
0x6183B0: mov     large fs:0, ecx
0x6183B7: pop     ecx
0x6183B8: pop     esi
0x6183B9: add     esp, 10h
0x6183BC: retn
