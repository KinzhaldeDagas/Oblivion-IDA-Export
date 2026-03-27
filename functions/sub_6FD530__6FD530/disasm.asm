0x6FD530: push    0FFFFFFFFh
0x6FD532: push    offset ??1NiKeyframeManager@@UAE@XZ_SEH
0x6FD537: mov     eax, large fs:0
0x6FD53D: push    eax
0x6FD53E: push    ecx
0x6FD53F: push    esi
0x6FD540: mov     eax, ds:0B30AACh
0x6FD545: xor     eax, esp
0x6FD547: push    eax
0x6FD548: lea     eax, [esp+18h+var_C]
0x6FD54C: mov     large fs:0, eax
0x6FD552: mov     esi, ecx
0x6FD554: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6FD559: xor     eax, eax
0x6FD55B: mov     [esi+40h], eax
0x6FD55E: mov     dword ptr [esi], offset ??_7NiBSBoneLODController@@6B@; const NiBSBoneLODController::`vftable'
0x6FD564: mov     dword ptr [esi+3Ch], 0FFFFFFFFh
0x6FD56B: mov     [esi+4Ch], ax
0x6FD56F: mov     [esi+4Eh], ax
0x6FD573: mov     [esi+50h], ax
0x6FD577: mov     [esi+48h], eax
0x6FD57A: mov     dword ptr [esi+44h], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6FD581: mov     word ptr [esi+52h], 1
0x6FD587: mov     eax, esi
0x6FD589: mov     ecx, [esp+18h+var_C]
0x6FD58D: mov     large fs:0, ecx
0x6FD594: pop     ecx
0x6FD595: pop     esi
0x6FD596: add     esp, 10h
0x6FD599: retn
