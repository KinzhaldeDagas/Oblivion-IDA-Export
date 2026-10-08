0x679850: push    0FFFFFFFFh; [Verified] ActorProcessManager_LoadTempEffects reads a UInt16 count and one-byte type tags. Type 0 constructs BSTempEffectDecal; type 1 constructs BSTempEffectGeometryDecal; type 2 constructs BSTempEffectParticle; types 5/6 construct MagicModelHitEffect/MagicShaderHitEffect. Successful virtual LoadGame results are re-registered by GetTypeID. The base BSTempEffect type returns 3 but is not saveable; type 4 has no handler in this switch and its producer/restore role remains Unknown.
0x679852: push    offset SEH_679850
0x679857: mov     eax, large fs:0
0x67985D: push    eax
0x67985E: sub     esp, 14h
0x679861: push    ebp
0x679862: push    esi
0x679863: push    edi
0x679864: mov     eax, ds:0B30AACh
0x679869: xor     eax, esp
0x67986B: push    eax
0x67986C: lea     eax, [esp+30h+var_C]
0x679870: mov     large fs:0, eax
0x679876: mov     [esp+30h+var_18], ecx
0x67987A: mov     ecx, ds:0B33B00h
0x679880: mov     al, [ecx+7Ch]
0x679883: cmp     al, 26h ; '&'
0x679885: jnb     short loc_679894
0x679887: push    6
0x679889: call    SaveLoad_AdvanceBufferOffset; EnginePatch v2: byte-checked SaveLoad_AdvanceBufferOffset hook. Clamps save cursor movement to active tracked record buffer.
0x67988E: mov     ecx, ds:0B33B00h; self
0x679894: push    2; byteCount
0x679896: lea     eax, [esp+34h+Dst]
0x67989A: push    eax; destination
0x67989B: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6798A0: cmp     [esp+30h+Dst], 0
0x6798A6: mov     [esp+30h+var_14], 0
0x6798AE: jbe     loc_679A40
0x6798B4: mov     ebp, ds:0A28078h
0x6798BA: or      edi, 0FFFFFFFFh
0x6798BD: push    1; byteCount
0x6798BF: lea     ecx, [esp+34h+destination]
0x6798C3: push    ecx; destination
0x6798C4: mov     ecx, ds:0B33B00h; self
0x6798CA: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6798CF: movzx   eax, [esp+30h+destination]
0x6798D4: cmp     eax, 6; switch 7 cases
0x6798D7: ja      def_6798DD; jumptable 006798DD default case, cases 3,4
0x6798DD: jmp     ds:jpt_6798DD[eax*4]; switch jump
0x6798E4: push    1Ch; jumptable 006798DD case 0
0x6798E6: call    FormHeapAlloc
0x6798EB: add     esp, 4
0x6798EE: mov     [esp+30h+var_10], eax
0x6798F2: test    eax, eax
0x6798F4: mov     [esp+30h+var_4], 0
0x6798FC: jz      short loc_679907
0x6798FE: mov     ecx, eax; this
0x679900: call    BSTempEffectDecal_DefaultInit; [Verified] Serialized type 0 allocates 0x1C bytes and calls BSTempEffectDecal_DefaultInit. Type 2 is a separate switch case at 0x679982 and calls BSTempEffectParticle_DefaultInit at 0x6799A0 after allocating 0x20 bytes.
0x679905: jmp     short loc_679909
0x679907: xor     eax, eax
0x679909: mov     esi, eax
0x67990B: test    esi, esi
0x67990D: mov     [esp+30h+var_4], edi
0x679911: jz      loc_679A28
0x679917: mov     edx, [esi]
0x679919: mov     eax, [edx+64h]
0x67991C: mov     ecx, esi
0x67991E: call    eax; Verified load dispatcher calls the newly created effect's virtual LoadGame (+0x64), then reads GetTypeID (+0x54) and routes IDs 4..6 to manager +0x48, other supported types including particle 2 to +0x40. Effects returning false are destroyed instead of registered.
0x679920: test    al, al
0x679922: mov     edx, [esi]
0x679924: mov     ecx, esi
0x679926: jz      loc_679A22
0x67992C: mov     eax, [edx+54h]
0x67992F: call    eax
0x679931: add     eax, 0FFFFFFFCh
0x679934: push    ecx
0x679935: cmp     eax, 2
0x679938: mov     eax, esp
0x67993A: mov     [esp+34h+var_10], esp
0x67993E: mov     [eax], esi
0x679940: ja      loc_679A0E
0x679946: add     esi, 4
0x679949: push    esi; lpAddend
0x67994A: call    ebp ; InterlockedIncrement
0x67994C: mov     ecx, [esp+34h+var_18]
0x679950: add     ecx, 48h ; 'H'
0x679953: call    sub_677CF0
0x679958: jmp     loc_679A28
0x67995D: push    54h ; 'T'; jumptable 006798DD case 1
0x67995F: call    FormHeapAlloc
0x679964: add     esp, 4
0x679967: mov     [esp+30h+var_10], eax
0x67996B: test    eax, eax
0x67996D: mov     [esp+30h+var_4], 1
0x679975: jz      short loc_679907
0x679977: mov     ecx, eax; this
0x679979: call    BSTempEffectGeometryDecal_DefaultInit; Verified type-1 restore initializer installs default geometry-decal state with base.initializeCallbackDone=false, then virtual LoadGame reconstructs the generated mesh through saved data instead of invoking Initialize.
0x67997E: jmp     short loc_679909
0x679980: push    20h ; ' '; jumptable 006798DD case 2
0x679982: call    FormHeapAlloc
0x679987: add     esp, 4
0x67998A: mov     [esp+30h+var_10], eax
0x67998E: test    eax, eax
0x679990: mov     [esp+30h+var_4], 2
0x679998: jz      loc_679907
0x67999E: mov     ecx, eax; self
0x6799A0: call    BSTempEffectParticle_DefaultInit; Verified BSTempEffectParticle default initialization is selected only for serialized type ID 2; allocation size matches the 0x20-byte Oblivion particle structure.
0x6799A5: jmp     loc_679909
0x6799AA: push    38h ; '8'; jumptable 006798DD case 5
0x6799AC: call    FormHeapAlloc
0x6799B1: add     esp, 4
0x6799B4: mov     [esp+30h+var_10], eax
0x6799B8: test    eax, eax
0x6799BA: mov     [esp+30h+var_4], 3
0x6799C2: jz      loc_679907
0x6799C8: mov     ecx, eax
0x6799CA: call    MagicModelHitEffect_constr
0x6799CF: jmp     loc_679909
0x6799D4: push    4Ch ; 'L'; jumptable 006798DD case 6
0x6799D6: call    FormHeapAlloc
0x6799DB: add     esp, 4
0x6799DE: mov     [esp+30h+var_10], eax
0x6799E2: test    eax, eax
0x6799E4: mov     [esp+30h+var_4], 4
0x6799EC: jz      loc_679907
0x6799F2: mov     ecx, eax
0x6799F4: call    MagicShaderHitEffect_constr
0x6799F9: jmp     loc_679909
0x6799FE: push    eax; jumptable 006798DD default case, cases 3,4
0x6799FF: push    offset aUnknownTempEff
0x679A04: call    PrintError
0x679A09: add     esp, 8
0x679A0C: jmp     short loc_679A28
0x679A0E: add     esi, 4
0x679A11: push    esi; lpAddend
0x679A12: call    ebp ; InterlockedIncrement
0x679A14: mov     ecx, [esp+34h+var_18]
0x679A18: add     ecx, 40h ; '@'
0x679A1B: call    sub_677CF0
0x679A20: jmp     short loc_679A28
0x679A22: mov     eax, [edx]
0x679A24: push    1
0x679A26: call    eax
0x679A28: mov     eax, [esp+30h+var_14]
0x679A2C: movzx   ecx, [esp+30h+Dst]
0x679A31: add     eax, 1
0x679A34: cmp     eax, ecx
0x679A36: mov     [esp+30h+var_14], eax
0x679A3A: jb      loc_6798BD
0x679A40: mov     ecx, dword ptr [esp+30h+var_C]
0x679A44: mov     large fs:0, ecx
0x679A4B: pop     ecx
0x679A4C: pop     edi
0x679A4D: pop     esi
0x679A4E: pop     ebp
0x679A4F: add     esp, 20h
0x679A52: retn
0x9C48C0: mov     eax, [ebp-10h]; Microsoft VisualC 2-14/net runtime
0x9C48C3: push    eax
0x9C48C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C48C9: pop     ecx
0x9C48CA: retn
0x9C48CB: mov     eax, [ebp-10h]
0x9C48CE: push    eax
0x9C48CF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C48D4: pop     ecx
0x9C48D5: retn
0x9C48D6: mov     eax, [ebp-10h]
0x9C48D9: push    eax
0x9C48DA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C48DF: pop     ecx
0x9C48E0: retn
0x9C48E1: mov     eax, [ebp-10h]
0x9C48E4: push    eax
0x9C48E5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C48EA: pop     ecx
0x9C48EB: retn
0x9C48EC: mov     eax, [ebp-10h]
0x9C48EF: push    eax
0x9C48F0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C48F5: pop     ecx
0x9C48F6: retn
0x9C48F7: mov     edx, [esp+arg_4]
0x9C48FB: lea     eax, [edx-20h]
0x9C48FE: mov     ecx, [edx-24h]
0x9C4901: xor     ecx, eax
0x9C4903: call    @__security_check_cookie@4
0x9C4908: mov     eax, offset stru_AED214
0x9C490D: jmp     ___CxxFrameHandler3
