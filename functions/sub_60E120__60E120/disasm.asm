0x60E120: push    0FFFFFFFFh
0x60E122: push    offset SEH_8C8970
0x60E127: mov     eax, large fs:0
0x60E12D: push    eax
0x60E12E: push    ecx
0x60E12F: push    esi
0x60E130: push    edi
0x60E131: mov     eax, ds:0B30AACh
0x60E136: xor     eax, esp
0x60E138: push    eax
0x60E139: lea     eax, [esp+1Ch+var_C]
0x60E13D: mov     large fs:0, eax
0x60E143: mov     edi, ecx
0x60E145: push    44h ; 'D'; Size
0x60E147: call    FormHeapAlloc
0x60E14C: mov     esi, eax
0x60E14E: add     esp, 4
0x60E151: mov     [esp+1Ch+var_10], esi
0x60E155: test    esi, esi
0x60E157: mov     [esp+1Ch+var_4], 0
0x60E15F: jz      short loc_60E17C
0x60E161: mov     ecx, esi; this
0x60E163: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x60E168: fldz
0x60E16A: fstp    dword ptr [esi+3Ch]
0x60E16D: mov     dword ptr [esi], offset ??_7BSPlayerDistanceCheckController@@6B@; const BSPlayerDistanceCheckController::`vftable'
0x60E173: mov     dword ptr [esi+40h], 0
0x60E17A: jmp     short loc_60E17E
0x60E17C: xor     esi, esi
0x60E17E: mov     eax, [edi+40h]
0x60E181: mov     ecx, [esp+1Ch+arg_0]
0x60E185: push    ecx
0x60E186: mov     [esi+40h], eax
0x60E189: fld     dword ptr [edi+3Ch]
0x60E18C: push    esi
0x60E18D: fstp    dword ptr [esi+3Ch]
0x60E190: mov     ecx, edi
0x60E192: mov     [esp+24h+var_4], 0FFFFFFFFh
0x60E19A: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x60E19F: mov     eax, esi
0x60E1A1: mov     ecx, [esp+1Ch+var_C]
0x60E1A5: mov     large fs:0, ecx
0x60E1AC: pop     ecx
0x60E1AD: pop     edi
0x60E1AE: pop     esi
0x60E1AF: add     esp, 10h
0x60E1B2: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
