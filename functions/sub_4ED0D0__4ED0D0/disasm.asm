0x4ED0D0: push    0FFFFFFFFh; Verified worker path: obtains the queued/archive file, loads the TerrainLODQuad NIF through NiStream/BSStream, and stores the loaded object in TerrainLODQuadLoadTask.loadedTerrainNode (+0x3C).
0x4ED0D2: push    offset SEH_4ED0D0
0x4ED0D7: mov     eax, large fs:0
0x4ED0DD: push    eax
0x4ED0DE: sub     esp, 494h
0x4ED0E4: mov     eax, ds:0B30AACh
0x4ED0E9: xor     eax, esp
0x4ED0EB: mov     [esp+4A0h+var_10], eax
0x4ED0F2: push    esi
0x4ED0F3: push    edi
0x4ED0F4: mov     eax, ds:0B30AACh
0x4ED0F9: xor     eax, esp
0x4ED0FB: push    eax
0x4ED0FC: lea     eax, [esp+4ACh+var_C]
0x4ED103: mov     large fs:0, eax
0x4ED109: push    1
0x4ED10B: push    0
0x4ED10D: mov     esi, ecx
0x4ED10F: call    sub_434650
0x4ED114: lea     ecx, [esp+4ACh+var_4A0]; this
0x4ED118: mov     edi, eax
0x4ED11A: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x4ED11F: mov     [esp+4ACh+var_4A0], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x4ED127: mov     [esp+4ACh+var_14], 0
0x4ED132: mov     [esp+4ACh+var_18], 0
0x4ED13D: mov     eax, [esi+20h]
0x4ED140: push    edi; int
0x4ED141: push    eax; Src
0x4ED142: lea     ecx, [esp+4B4h+var_4A0]
0x4ED146: mov     [esp+4B4h+var_4], 0
0x4ED151: call    sub_6F9980
0x4ED156: test    al, al
0x4ED158: jz      short loc_4ED16C
0x4ED15A: mov     eax, [esp+4ACh+var_298]
0x4ED161: mov     eax, [eax]
0x4ED163: push    eax; a2
0x4ED164: lea     ecx, [esi+3Ch]; this
0x4ED167: call    NiSmartPointer_Set??
0x4ED16C: lea     ecx, [esp+4ACh+var_4A0]; this
0x4ED170: mov     [esp+4ACh+var_4], 0FFFFFFFFh
0x4ED17B: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x4ED180: mov     ecx, [esp+4ACh+var_C]
0x4ED187: mov     large fs:0, ecx
0x4ED18E: pop     ecx
0x4ED18F: pop     edi
0x4ED190: pop     esi
0x4ED191: mov     ecx, [esp+4A0h+var_10]
0x4ED198: xor     ecx, esp
0x4ED19A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ED19F: add     esp, 4A0h
0x4ED1A5: retn
0x9B6590: lea     ecx, [ebp-4A0h]; this
0x9B6596: jmp     ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x9B659B: mov     edx, [esp+arg_4]
0x9B659F: lea     eax, [edx-49Ch]
0x9B65A5: mov     ecx, [edx-4A0h]
0x9B65AB: xor     ecx, eax
0x9B65AD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B65B2: add     eax, 8
0x9B65B5: mov     ecx, [edx-4]
0x9B65B8: xor     ecx, eax
0x9B65BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B65BF: mov     eax, offset stru_AE1448
0x9B65C4: jmp     ___CxxFrameHandler3
