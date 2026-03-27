0x720F80: push    0FFFFFFFFh
0x720F82: push    offset SEH_720F80
0x720F87: mov     eax, large fs:0
0x720F8D: push    eax
0x720F8E: sub     esp, 228h
0x720F94: mov     eax, ds:0B30AACh
0x720F99: xor     eax, esp
0x720F9B: mov     [esp+234h+var_10], eax
0x720FA2: push    ebx
0x720FA3: push    ebp
0x720FA4: push    esi
0x720FA5: push    edi
0x720FA6: mov     eax, ds:0B30AACh
0x720FAB: xor     eax, esp
0x720FAD: push    eax
0x720FAE: lea     eax, [esp+248h+var_C]
0x720FB5: mov     large fs:0, eax
0x720FBB: mov     eax, [esp+248h+arg_C]
0x720FC2: mov     ecx, [esp+248h+arg_10]
0x720FC9: mov     edx, [esp+248h+arg_14]
0x720FD0: mov     edi, [esp+248h+arg_0]
0x720FD7: mov     ebx, [esp+248h+arg_4]
0x720FDE: mov     ebp, [esp+248h+arg_8]
0x720FE5: mov     [esp+248h+var_234], eax
0x720FE9: mov     eax, [esp+248h+arg_18]
0x720FF0: push    4Ch ; 'L'; Size
0x720FF2: mov     [esp+24Ch+var_22C], ecx
0x720FF6: mov     [esp+24Ch+var_228], edx
0x720FFA: mov     [esp+24Ch+var_230], eax
0x720FFE: call    FormHeapAlloc
0x721003: mov     esi, eax
0x721005: add     esp, 4
0x721008: mov     [esp+248h+var_224], esi
0x72100C: test    esi, esi
0x72100E: mov     [esp+248h+var_4], 0
0x721019: jz      short loc_721031
0x72101B: mov     ecx, esi; this
0x72101D: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x721022: mov     dword ptr [esi], offset NiSourceCubeMap__VTBL
0x721028: mov     dword ptr [esi+48h], 0
0x72102F: jmp     short loc_721033
0x721031: xor     esi, esi
0x721033: mov     eax, [esp+248h+arg_1C]
0x72103A: mov     ecx, [eax]
0x72103C: mov     [esi+18h], ecx
0x72103F: mov     edx, [eax+4]
0x721042: mov     [esi+1Ch], edx
0x721045: mov     eax, [eax+8]
0x721048: lea     ecx, [esp+248h+var_220]
0x72104C: mov     [esp+248h+var_4], 0FFFFFFFFh
0x721057: mov     [esi+20h], eax
0x72105A: call    sub_7478C0
0x72105F: mov     edx, [esp+248h+var_228]
0x721063: mov     eax, [esp+248h+var_22C]
0x721067: lea     ecx, [esp+248h+var_220]
0x72106B: push    ecx
0x72106C: mov     ecx, [esp+24Ch+var_234]
0x721070: push    edx
0x721071: push    eax
0x721072: push    ecx
0x721073: push    ebp
0x721074: push    ebx
0x721075: push    edi
0x721076: mov     ecx, esi
0x721078: mov     [esp+264h+var_4], 1
0x721083: call    sub_720B40
0x721088: cmp     dword ptr [esi+48h], 0
0x72108C: jz      short loc_721095
0x72108E: mov     dword ptr [esi+48h], 0
0x721095: mov     ecx, [esp+248h+var_230]
0x721099: test    ecx, ecx
0x72109B: jz      short loc_7210D4
0x72109D: cmp     dword ptr [esi+3Ch], 0
0x7210A1: jz      short loc_7210B2
0x7210A3: mov     edx, [ecx]
0x7210A5: mov     eax, [edx+10Ch]
0x7210AB: push    esi
0x7210AC: call    eax
0x7210AE: test    al, al
0x7210B0: jnz     short loc_7210D4
0x7210B2: mov     edx, [esi]
0x7210B4: mov     eax, [edx]
0x7210B6: push    1
0x7210B8: mov     ecx, esi
0x7210BA: call    eax
0x7210BC: lea     ecx, [esp+248h+var_220]; this
0x7210C0: mov     [esp+248h+var_4], 0FFFFFFFFh
0x7210CB: call    ??1BSSearchPath@@UAE@XZ; BSSearchPath::~BSSearchPath(void)
0x7210D0: xor     eax, eax
0x7210D2: jmp     short loc_7210EA
0x7210D4: lea     ecx, [esp+248h+var_220]; this
0x7210D8: mov     [esp+248h+var_4], 0FFFFFFFFh
0x7210E3: call    ??1BSSearchPath@@UAE@XZ; BSSearchPath::~BSSearchPath(void)
0x7210E8: mov     eax, esi
0x7210EA: mov     ecx, [esp+248h+var_C]
0x7210F1: mov     large fs:0, ecx
0x7210F8: pop     ecx
0x7210F9: pop     edi
0x7210FA: pop     esi
0x7210FB: pop     ebp
0x7210FC: pop     ebx
0x7210FD: mov     ecx, [esp+234h+var_10]
0x721104: xor     ecx, esp
0x721106: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72110B: add     esp, 234h
0x721111: retn
