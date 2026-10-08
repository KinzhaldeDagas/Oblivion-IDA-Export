0x6A4420: push    0FFFFFFFFh
0x6A4422: push    offset ??0ScriptEffect@@QAE@XZ_SEH
0x6A4427: mov     eax, large fs:0
0x6A442D: push    eax
0x6A442E: push    ecx
0x6A442F: push    esi
0x6A4430: push    edi
0x6A4431: mov     eax, ds:0B30AACh
0x6A4436: xor     eax, esp
0x6A4438: push    eax
0x6A4439: lea     eax, [esp+1Ch+var_C]
0x6A443D: mov     large fs:0, eax
0x9C57E0: mov     ecx, [ebp-10h]; this
0x9C57E3: jmp     ??1ActiveEffect@@UAE@XZ; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x9C57E8: mov     edx, [esp+arg_4]
0x9C57EC: lea     eax, [edx-0Ch]
0x9C57EF: mov     ecx, [edx-10h]
0x9C57F2: xor     ecx, eax
0x9C57F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C57F9: mov     eax, offset stru_AEDF6C
0x9C57FE: jmp     ___CxxFrameHandler3
