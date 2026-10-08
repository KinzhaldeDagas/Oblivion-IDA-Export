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
0x6183A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6183A9: add     esp, 4
0x6183AC: mov     ecx, [esp+18h+var_C]
0x6183B0: mov     large fs:0, ecx
0x6183B7: pop     ecx
0x6183B8: pop     esi
0x6183B9: add     esp, 10h
0x6183BC: retn
0x614E80: push    esi
0x614E81: mov     esi, ecx
0x614E83: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESGameSoundHandle@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGameSoundHandle *>::`vftable'
0x614E89: call    NiTMap_Clear
0x614E8E: mov     eax, [esi+8]
0x614E91: push    eax
0x614E92: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x614E97: add     esp, 4
0x614E9A: pop     esi
0x614E9B: retn
0x9C3340: mov     ecx, [ebp-10h]
0x9C3343: jmp     loc_614E80
0x9C3348: mov     edx, [esp+arg_4]
0x9C334C: lea     eax, [edx-8]
0x9C334F: mov     ecx, [edx-0Ch]
0x9C3352: xor     ecx, eax
0x9C3354: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3359: mov     eax, offset stru_AEBF6C
0x9C335E: jmp     ___CxxFrameHandler3
