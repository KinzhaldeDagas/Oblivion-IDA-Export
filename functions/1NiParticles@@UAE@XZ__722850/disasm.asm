0x722850: push    0FFFFFFFFh
0x722852: push    offset ??1NiParticles@@UAE@XZ_SEH
0x722857: mov     eax, large fs:0
0x72285D: push    eax
0x72285E: push    ecx
0x72285F: push    ebx
0x722860: push    ebp
0x722861: push    esi
0x722862: push    edi
0x722863: mov     eax, ds:0B30AACh
0x722868: xor     eax, esp
0x72286A: push    eax
0x72286B: lea     eax, [esp+24h+var_C]
0x72286F: mov     large fs:0, eax
0x722875: mov     esi, ecx
0x722877: mov     [esp+24h+var_10], esi
0x72287B: mov     dword ptr [esi], offset ??_7NiGeometry@@6B@; const NiGeometry::`vftable'
0x722881: push    esi
0x722882: mov     [esp+28h+var_4], 5
0x72288A: call    sub_738420
0x72288F: add     esp, 4
0x722892: push    offset stru_B3FA00; lpCriticalSection
0x722897: call    dword ptr ds:0A2806Ch
0x72289D: call    dword ptr ds:0A2808Ch
0x7228A3: add     dword ptr ds:0B3FA7Ch, 1
0x7228AA: mov     ebp, ds:0A2807Ch
0x7228B0: mov     ds:0B3FA78h, eax
0x7228B5: mov     edi, [esi+0ACh]
0x7228BB: xor     ebx, ebx
0x7228BD: cmp     edi, ebx
0x7228BF: jz      short loc_7228DF
0x7228C1: lea     eax, [edi+4]
0x7228C4: push    eax; lpAddend
0x7228C5: call    ebp ; InterlockedDecrement
0x7228C7: test    eax, eax
0x7228C9: jnz     short loc_7228D9
0x7228CB: cmp     edi, ebx
0x7228CD: jz      short loc_7228D9
0x7228CF: mov     edx, [edi]
0x7228D1: mov     eax, [edx]
0x7228D3: push    1
0x7228D5: mov     ecx, edi
0x7228D7: call    eax
0x7228D9: mov     [esi+0ACh], ebx
0x7228DF: sub     dword ptr ds:0B3FA7Ch, 1
0x7228E6: jnz     short loc_7228EE
0x7228E8: mov     ds:0B3FA78h, ebx
0x7228EE: push    offset stru_B3FA00; lpCriticalSection
0x7228F3: call    dword ptr ds:0A28074h
0x7228F9: mov     edi, [esi+0B4h]
0x7228FF: cmp     edi, ebx
0x722901: jz      short loc_722921
0x722903: lea     ecx, [edi+4]
0x722906: push    ecx; lpAddend
0x722907: call    ebp ; InterlockedDecrement
0x722909: test    eax, eax
0x72290B: jnz     short loc_72291B
0x72290D: cmp     edi, ebx
0x72290F: jz      short loc_72291B
0x722911: mov     edx, [edi]
0x722913: mov     eax, [edx]
0x722915: push    1
0x722917: mov     ecx, edi
0x722919: call    eax
0x72291B: mov     [esi+0B4h], ebx
0x722921: mov     edi, [esi+0BCh]
0x722927: cmp     edi, ebx
0x722929: mov     byte ptr [esp+24h+var_4], 4
0x72292E: jz      short loc_722948
0x722930: lea     ecx, [edi+4]
0x722933: push    ecx; lpAddend
0x722934: call    ebp ; InterlockedDecrement
0x722936: test    eax, eax
0x722938: jnz     short loc_722948
0x72293A: cmp     edi, ebx
0x72293C: jz      short loc_722948
0x72293E: mov     edx, [edi]
0x722940: mov     eax, [edx]
0x722942: push    1
0x722944: mov     ecx, edi
0x722946: call    eax
0x722948: mov     edi, [esi+0B8h]
0x72294E: cmp     edi, ebx
0x722950: mov     byte ptr [esp+24h+var_4], 3
0x722955: jz      short loc_72296F
0x722957: lea     ecx, [edi+4]
0x72295A: push    ecx; lpAddend
0x72295B: call    ebp ; InterlockedDecrement
0x72295D: test    eax, eax
0x72295F: jnz     short loc_72296F
0x722961: cmp     edi, ebx
0x722963: jz      short loc_72296F
0x722965: mov     edx, [edi]
0x722967: mov     eax, [edx]
0x722969: push    1
0x72296B: mov     ecx, edi
0x72296D: call    eax
0x72296F: mov     edi, [esi+0B4h]
0x722975: cmp     edi, ebx
0x722977: mov     byte ptr [esp+24h+var_4], 2
0x72297C: jz      short loc_722996
0x72297E: lea     ecx, [edi+4]
0x722981: push    ecx; lpAddend
0x722982: call    ebp ; InterlockedDecrement
0x722984: test    eax, eax
0x722986: jnz     short loc_722996
0x722988: cmp     edi, ebx
0x72298A: jz      short loc_722996
0x72298C: mov     edx, [edi]
0x72298E: mov     eax, [edx]
0x722990: push    1
0x722992: mov     ecx, edi
0x722994: call    eax
0x722996: mov     edi, [esi+0B0h]
0x72299C: cmp     edi, ebx
0x72299E: mov     byte ptr [esp+24h+var_4], 1
0x7229A3: jz      short loc_7229BD
0x7229A5: lea     ecx, [edi+4]
0x7229A8: push    ecx; lpAddend
0x7229A9: call    ebp ; InterlockedDecrement
0x7229AB: test    eax, eax
0x7229AD: jnz     short loc_7229BD
0x7229AF: cmp     edi, ebx
0x7229B1: jz      short loc_7229BD
0x7229B3: mov     edx, [edi]
0x7229B5: mov     eax, [edx]
0x7229B7: push    1
0x7229B9: mov     ecx, edi
0x7229BB: call    eax
0x7229BD: mov     edi, [esi+0ACh]
0x7229C3: cmp     edi, ebx
0x7229C5: mov     byte ptr [esp+24h+var_4], bl
0x7229C9: jz      short loc_7229E3
0x7229CB: lea     ecx, [edi+4]
0x7229CE: push    ecx; lpAddend
0x7229CF: call    ebp ; InterlockedDecrement
0x7229D1: test    eax, eax
0x7229D3: jnz     short loc_7229E3
0x7229D5: cmp     edi, ebx
0x7229D7: jz      short loc_7229E3
0x7229D9: mov     edx, [edi]
0x7229DB: mov     eax, [edx]
0x7229DD: push    1
0x7229DF: mov     ecx, edi
0x7229E1: call    eax
0x7229E3: mov     ecx, esi; this
0x7229E5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7229ED: call    ??1NiAVObject@@UAE@XZ; NiAVObject::~NiAVObject(void)
0x7229F2: mov     ecx, dword ptr [esp+24h+var_C]
0x7229F6: mov     large fs:0, ecx
0x7229FD: pop     ecx
0x7229FE: pop     edi
0x7229FF: pop     esi
0x722A00: pop     ebp
0x722A01: pop     ebx
0x722A02: add     esp, 10h
0x722A05: retn
