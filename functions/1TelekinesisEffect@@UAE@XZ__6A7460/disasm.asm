0x6A7460: push    0FFFFFFFFh
0x6A7462: push    offset ??1TelekinesisEffect@@UAE@XZ_SEH
0x6A7467: mov     eax, large fs:0
0x6A746D: push    eax
0x6A746E: push    ecx
0x6A746F: push    esi
0x6A7470: push    edi
0x6A7471: mov     eax, ds:0B30AACh
0x6A7476: xor     eax, esp
0x6A7478: push    eax
0x6A7479: lea     eax, [esp+1Ch+var_C]
0x6A747D: mov     large fs:0, eax
0x6A7483: mov     edi, ecx
0x6A7485: mov     [esp+1Ch+var_10], edi
0x6A7489: mov     esi, [edi+3Ch]
0x6A748C: test    esi, esi
0x6A748E: mov     [esp+1Ch+var_4], 0
0x6A7496: jz      short loc_6A74B4
0x6A7498: lea     eax, [esi+4]
0x6A749B: push    eax; lpAddend
0x6A749C: call    dword ptr ds:0A2807Ch
0x6A74A2: test    eax, eax
0x6A74A4: jnz     short loc_6A74B4
0x6A74A6: test    esi, esi
0x6A74A8: jz      short loc_6A74B4
0x6A74AA: mov     edx, [esi]
0x6A74AC: mov     eax, [edx]
0x6A74AE: push    1
0x6A74B0: mov     ecx, esi
0x6A74B2: call    eax
0x6A74B4: mov     ecx, edi; this
0x6A74B6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6A74BE: call    ??1ActiveEffect@@UAE@XZ; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x6A74C3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A74C7: mov     large fs:0, ecx
0x6A74CE: pop     ecx
0x6A74CF: pop     edi
0x6A74D0: pop     esi
0x6A74D1: add     esp, 10h
0x6A74D4: retn
0x9C6260: mov     ecx, [ebp-10h]; this
0x9C6263: jmp     j_??1VampirismEffect@@UAE@XZ; VampirismEffect::~VampirismEffect(void)
0x9C6268: mov     edx, [esp+arg_4]
0x9C626C: lea     eax, [edx-0Ch]
0x9C626F: mov     ecx, [edx-10h]
0x9C6272: xor     ecx, eax
0x9C6274: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6279: mov     eax, offset stru_AEE848
0x9C627E: jmp     ___CxxFrameHandler3
