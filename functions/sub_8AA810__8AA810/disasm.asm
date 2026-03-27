0x8AA810: push    0FFFFFFFFh
0x8AA812: push    offset SEH_8AA810
0x8AA817: mov     eax, large fs:0
0x8AA81D: push    eax
0x8AA81E: push    ecx
0x8AA81F: push    esi
0x8AA820: mov     eax, ds:0B30AACh
0x8AA825: xor     eax, esp
0x8AA827: push    eax
0x8AA828: lea     eax, [esp+18h+var_C]
0x8AA82C: mov     large fs:0, eax
0x8AA832: mov     esi, ecx
0x8AA834: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x8AA839: fld     dword ptr ds:0A30634h
0x8AA83F: xor     eax, eax
0x8AA841: mov     dword ptr [esi], offset ??_7bhkBlendController@@6B@; const bhkBlendController::`vftable'
0x8AA847: mov     [esi+48h], eax
0x8AA84A: mov     [esi+4Ch], eax
0x8AA84D: mov     [esi+50h], eax
0x8AA850: mov     [esi+44h], eax
0x8AA853: mov     dword ptr [esi+40h], offset ??_7?$NiTLargeArray@UBLENDKEY@@@@6B@; const NiTLargeArray<BLENDKEY>::`vftable'
0x8AA85A: mov     dword ptr [esi+54h], 1
0x8AA861: fst     dword ptr [esi+58h]
0x8AA864: mov     [esi+3Ch], eax
0x8AA867: fstp    dword ptr [esi+5Ch]
0x8AA86A: mov     [esi+60h], eax
0x8AA86D: mov     dword ptr [esi+54h], 4
0x8AA874: mov     eax, esi
0x8AA876: mov     ecx, [esp+18h+var_C]
0x8AA87A: mov     large fs:0, ecx
0x8AA881: pop     ecx
0x8AA882: pop     esi
0x8AA883: add     esp, 10h
0x8AA886: retn
