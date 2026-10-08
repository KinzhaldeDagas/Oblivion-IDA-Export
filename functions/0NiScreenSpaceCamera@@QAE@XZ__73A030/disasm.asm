0x73A030: push    0FFFFFFFFh; Pass227: NiScreenSpaceCamera constructor initializes +0x134 screen-texture array with capacity/grow size 5.
0x73A032: push    offset ??0NiScreenSpaceCamera@@QAE@XZ_SEH
0x73A037: mov     eax, large fs:0
0x73A03D: push    eax
0x73A03E: push    ecx
0x73A03F: push    esi
0x73A040: mov     eax, ds:0B30AACh
0x73A045: xor     eax, esp
0x73A047: push    eax
0x73A048: lea     eax, [esp+18h+var_C]
0x73A04C: mov     large fs:0, eax
0x73A052: mov     esi, ecx
0x73A054: mov     [esp+18h+var_10], esi
0x73A058: call    sub_70D590
0x73A05D: push    5
0x73A05F: push    5
0x73A061: lea     ecx, [esi+124h]
0x73A067: mov     [esp+20h+var_4], 0
0x73A06F: mov     dword ptr [esi], offset ??_7NiScreenSpaceCamera@@6B@; const NiScreenSpaceCamera::`vftable'
0x73A075: call    sub_739710
0x73A07A: push    5
0x73A07C: push    5
0x73A07E: lea     ecx, [esi+134h]
0x73A084: mov     byte ptr [esp+20h+var_4], 1
0x73A089: call    sub_7394A0; Pass227: Constructs NiTArray<NiPointer<NiScreenTexture>> for NiScreenSpaceCamera +0x134.
0x73A08E: mov     ecx, esi
0x73A090: mov     byte ptr [esp+18h+var_4], 2
0x73A095: mov     byte ptr [esi+104h], 1
0x73A09C: call    unknown_libname_9_0
0x73A0A1: mov     ecx, esi
0x73A0A3: call    sub_70CC70
0x73A0A8: mov     eax, esi
0x73A0AA: mov     ecx, [esp+18h+var_C]
0x73A0AE: mov     large fs:0, ecx
0x73A0B5: pop     ecx
0x73A0B6: pop     esi
0x73A0B7: add     esp, 10h
0x73A0BA: retn
0x739570: mov     eax, [ecx+4]
0x739573: test    eax, eax
0x739575: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenTexture@@@@@@6B@; const NiTArray<NiPointer<NiScreenTexture>>::`vftable'
0x73957B: jz      short locret_73959C
0x73957D: mov     ecx, [eax-4]
0x739580: push    esi
0x739581: lea     esi, [eax-4]
0x739584: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x739589: push    ecx; int
0x73958A: push    4; unsigned int
0x73958C: push    eax; void *
0x73958D: call    $LN21
0x739592: push    esi
0x739593: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x739598: add     esp, 4
0x73959B: pop     esi
0x73959C: retn
0x7397E0: mov     eax, [ecx+4]
0x7397E3: test    eax, eax
0x7397E5: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenPolygon@@@@@@6B@; const NiTArray<NiPointer<NiScreenPolygon>>::`vftable'
0x7397EB: jz      short locret_73980C
0x7397ED: mov     ecx, [eax-4]
0x7397F0: push    esi
0x7397F1: lea     esi, [eax-4]
0x7397F4: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7397F9: push    ecx; int
0x7397FA: push    4; unsigned int
0x7397FC: push    eax; void *
0x7397FD: call    $LN21
0x739802: push    esi
0x739803: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x739808: add     esp, 4
0x73980B: pop     esi
0x73980C: retn
0x9CABB0: mov     ecx, [ebp-10h]
0x9CABB3: jmp     DestroyNiCamera?
0x9CABB8: mov     ecx, [ebp-10h]
0x9CABBB: add     ecx, 124h
0x9CABC1: jmp     loc_7397E0
0x9CABC6: mov     ecx, [ebp-10h]
0x9CABC9: add     ecx, 134h
0x9CABCF: jmp     loc_739570
0x9CABD4: mov     edx, [esp+arg_4]
0x9CABD8: lea     eax, [edx-8]
0x9CABDB: mov     ecx, [edx-0Ch]
0x9CABDE: xor     ecx, eax
0x9CABE0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CABE5: mov     eax, offset stru_AF31FC
0x9CABEA: jmp     ___CxxFrameHandler3
