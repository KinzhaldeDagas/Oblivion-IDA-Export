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
0x6FD554: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
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
0x9C80C0: mov     ecx, [ebp-10h]; this
0x9C80C3: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C80C8: mov     edx, [esp+arg_4]
0x9C80CC: lea     eax, [edx-8]
0x9C80CF: mov     ecx, [edx-0Ch]
0x9C80D2: xor     ecx, eax
0x9C80D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C80D9: mov     eax, offset stru_AF03BC
0x9C80DE: jmp     ___CxxFrameHandler3
