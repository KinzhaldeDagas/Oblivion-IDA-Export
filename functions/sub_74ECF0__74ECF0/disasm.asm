0x74ECF0: push    esi
0x74ECF1: mov     esi, ecx
0x74ECF3: push    edi
0x74ECF4: lea     ecx, [esi+0D4h]
0x74ECFA: call    ??1?$NiTStringPointerMap@PAVNiPSysModifier@@@@UAE@XZ; NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>(void)
0x74ECFF: lea     edi, [esi+0C4h]
0x74ED05: mov     ecx, edi
0x74ED07: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiPSysModifier@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiPSysModifier>>::`vftable'
0x74ED0D: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x74ED12: mov     ecx, esi; this
0x74ED14: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiPSysModifier@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiPSysModifier>>::`vftable'
0x74ED1A: call    ??1NiParticles@@UAE@XZ; NiParticles::~NiParticles(void)
0x74ED1F: test    [esp+8+arg_0], 1
0x74ED24: jz      short loc_74ED2F
0x74ED26: push    esi
0x74ED27: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x74ED2C: add     esp, 4
0x74ED2F: pop     edi
0x74ED30: mov     eax, esi
0x74ED32: pop     esi
0x74ED33: retn    4
