0x6A16F0: push    0FFFFFFFFh
0x6A16F2: push    offset SEH_6A16F0
0x6A16F7: mov     eax, large fs:0
0x6A16FD: push    eax
0x6A16FE: sub     esp, 130h
0x6A1704: mov     eax, ds:0B30AACh
0x6A1709: xor     eax, esp
0x6A170B: mov     [esp+13Ch+var_10], eax
0x6A1712: push    ebx
0x6A1713: push    ebp
0x6A1714: push    esi
0x6A1715: push    edi
0x6A1716: mov     eax, ds:0B30AACh
0x6A171B: xor     eax, esp
0x6A171D: push    eax
0x6A171E: lea     eax, [esp+150h+var_C]
0x6A1725: mov     large fs:0, eax
0x6A172B: mov     ebp, ecx
0x6A172D: mov     eax, [ebp+18h]
0x6A1730: xor     edi, edi
0x6A1732: cmp     eax, edi
0x6A1734: jz      short loc_6A176B
0x6A1736: fld     dword ptr [eax+4]
0x6A1739: fstp    [esp+150h+var_12C]
0x6A173D: fld     [esp+150h+var_12C]
0x6A1741: fstp    dword ptr [ebp+20h]
0x6A1744: mov     ecx, [eax+0Ch]
0x6A1747: mov     ecx, [ecx+1Ch]
0x6A174A: mov     edx, [ecx+58h]
0x6A174D: shr     edx, 0Ah
0x6A1750: not     dl
0x6A1752: and     dl, 1
0x6A1755: mov     [ebp+24h], dl
0x6A1758: mov     eax, [eax+14h]
0x6A175B: shr     eax, 4
0x6A175E: test    al, 1
0x6A1760: jz      short loc_6A176B
0x6A1762: fld     dword ptr ds:0A2FE7Ch
0x6A1768: fstp    dword ptr [ebp+38h]
0x6A176B: fldz
0x6A176D: mov     ecx, ds:0B333C4h
0x6A1773: cmp     [ebp+1Ch], ecx
0x6A1776: fstp    [esp+150h+var_12C]
0x6A177A: mov     [esp+150h+var_13A], 0
0x6A177F: mov     [esp+150h+var_139], 0
0x6A1784: mov     [esp+150h+var_13B], 0
0x6A1789: jnz     short loc_6A17C7
0x6A178B: push    edi
0x6A178C: call    PlayerCharacter_GetPlayerNode
0x6A1791: test    eax, eax
0x6A1793: jz      short loc_6A17C7
0x6A1795: mov     ecx, ds:0B333C4h
0x6A179B: push    edi
0x6A179C: call    PlayerCharacter_GetPlayerNode
0x6A17A1: fldz
0x6A17A3: fcomp   dword ptr [ebp+20h]
0x6A17A6: mov     cl, [eax+18h]
0x6A17A9: not     cl
0x6A17AB: and     cl, 1
0x6A17AE: fnstsw  ax
0x6A17B0: test    ah, 5
0x6A17B3: jp      short loc_6A17BF
0x6A17B5: cmp     cl, [ebp+44h]
0x6A17B8: mov     [esp+150h+var_13B], 1
0x6A17BD: jnz     short loc_6A17C4
0x6A17BF: mov     [esp+150h+var_13B], 0
0x6A17C4: mov     [ebp+44h], cl
0x6A17C7: lea     ecx, [esp+150h+var_134]
0x6A17CB: push    ecx
0x6A17CC: lea     edx, [esp+154h+var_130]
0x6A17D0: push    edx
0x6A17D1: lea     eax, [esp+158h+var_12C]
0x6A17D5: push    eax
0x6A17D6: lea     ecx, [esp+15Ch+var_13A]
0x6A17DA: push    ecx
0x6A17DB: lea     edx, [esp+160h+var_139]
0x6A17DF: push    edx
0x6A17E0: mov     ecx, ebp
0x6A17E2: mov     [esp+164h+var_130], edi
0x6A17E6: mov     [esp+164h+var_134], edi
0x6A17EA: call    sub_6A0D90
0x6A17EF: cmp     [esp+150h+var_130], edi
0x6A17F3: jz      loc_6A1C6C
0x6A17F9: cmp     [esp+150h+var_134], edi
0x6A17FD: jz      loc_6A1C6C
0x6A1803: mov     eax, [ebp+34h]
0x6A1806: cmp     eax, edi
0x6A1808: jz      loc_6A1C6C
0x6A180E: mov     ecx, ds:0B33398h
0x6A1814: mov     ebx, [ecx+24h]
0x6A1817: cmp     ebx, edi
0x6A1819: jz      loc_6A18C0
0x6A181F: mov     eax, [eax+0Ch]
0x6A1822: cmp     eax, 852FEh
0x6A1827: jz      short loc_6A1834
0x6A1829: cmp     eax, 84A51h
0x6A182E: jnz     loc_6A18C0
0x6A1834: push    1
0x6A1836: push    12h
0x6A1838: push    offset aAmbfiremediuml; "AMBFireMediumLP"
0x6A183D: mov     ecx, ebx
0x6A183F: call    PlaySound???
0x6A1844: mov     esi, eax
0x6A1846: cmp     esi, edi
0x6A1848: jz      short loc_6A18C0
0x6A184A: mov     ecx, [ebp+1Ch]
0x6A184D: mov     edx, [ecx]
0x6A184F: mov     eax, [edx+174h]
0x6A1855: call    eax
0x6A1857: mov     ecx, [eax]
0x6A1859: mov     edx, [eax+4]
0x6A185C: mov     eax, [eax+8]
0x6A185F: sub     esp, 0Ch
0x6A1862: mov     [esp+15Ch+var_118], eax
0x6A1866: fld     [esp+15Ch+var_118]
0x6A186A: fstp    [esp+15Ch+var_154]; float
0x6A186E: mov     [esp+15Ch+var_11C], edx
0x6A1872: fld     [esp+15Ch+var_11C]
0x6A1876: mov     [esp+15Ch+var_120], ecx
0x6A187A: fstp    [esp+15Ch+var_158]; float
0x6A187E: mov     ecx, esi
0x6A1880: fld     [esp+15Ch+var_120]
0x6A1884: fstp    [esp+15Ch+var_15C]; float
0x6A1887: call    sub_6B7360
0x6A188C: fld1
0x6A188E: push    ecx
0x6A188F: mov     ecx, esi
0x6A1891: fstp    [esp+154h+var_154]; float
0x6A1894: call    sub_6B7280
0x6A1899: push    1
0x6A189B: mov     ecx, esi
0x6A189D: call    sub_6B7190
0x6A18A2: mov     ecx, [ebp+1Ch]
0x6A18A5: mov     eax, [esi]
0x6A18A7: push    ecx
0x6A18A8: push    eax
0x6A18A9: mov     ecx, ebx
0x6A18AB: call    sub_6AC3E0
0x6A18B0: mov     ecx, esi; this
0x6A18B2: call    sub_6B73E0
0x6A18B7: push    esi
0x6A18B8: call    FormHeapFree
0x6A18BD: add     esp, 4
0x6A18C0: cmp     byte ptr [ebp+28h], 0
0x6A18C4: mov     bl, 1
0x6A18C6: jz      short loc_6A1921
0x6A18C8: mov     ecx, [ebp+1Ch]
0x6A18CB: mov     edx, [ecx]
0x6A18CD: mov     eax, [edx+190h]
0x6A18D3: call    eax
0x6A18D5: test    al, al
0x6A18D7: jz      short loc_6A1921
0x6A18D9: mov     ecx, [ebp+1Ch]
0x6A18DC: mov     ecx, [ecx+58h]
0x6A18DF: cmp     ecx, edi
0x6A18E1: jz      short loc_6A1921
0x6A18E3: mov     edx, [ecx]
0x6A18E5: mov     eax, [edx+138h]
0x6A18EB: call    eax
0x6A18ED: test    al, al
0x6A18EF: jz      short loc_6A18F3
0x6A18F1: xor     bl, bl
0x6A18F3: mov     ecx, [ebp+1Ch]
0x6A18F6: mov     ecx, [ecx+58h]
0x6A18F9: mov     edx, [ecx]
0x6A18FB: mov     eax, [edx+304h]
0x6A1901: call    eax
0x6A1903: test    al, al
0x6A1905: jnz     short loc_6A1919
0x6A1907: mov     ecx, ds:0B333C4h
0x6A190D: cmp     [ecx+5E0h], ebp
0x6A1913: jnz     loc_6A1B3D
0x6A1919: test    bl, bl
0x6A191B: jz      loc_6A1B3D
0x6A1921: mov     ecx, [ebp+34h]
0x6A1924: push    8
0x6A1926: call    sub_4AC730
0x6A192B: test    al, al
0x6A192D: jnz     loc_6A1B3D
0x6A1933: cmp     [ebp+40h], edi
0x6A1936: lea     ebx, [ebp+40h]
0x6A1939: jnz     short loc_6A1995
0x6A193B: push    0DCh ; 'Ü'; Size
0x6A1940: call    FormHeapAlloc
0x6A1945: add     esp, 4
0x6A1948: mov     [esp+150h+var_124], eax
0x6A194C: cmp     eax, edi
0x6A194E: mov     [esp+150h+var_4], edi
0x6A1955: jz      short loc_6A1961
0x6A1957: push    edi
0x6A1958: mov     ecx, eax; this
0x6A195A: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x6A195F: jmp     short loc_6A1963
0x6A1961: xor     eax, eax
0x6A1963: push    eax; a2
0x6A1964: mov     ecx, ebx; this
0x6A1966: mov     [esp+154h+var_4], 0FFFFFFFFh
0x6A1971: call    NiSmartPointer_Set??
0x6A1976: mov     ecx, [ebx]
0x6A1978: push    offset aParticleshader; "ParticleShader Geometry"
0x6A197D: call    NiObjectNET_SetName
0x6A1982: mov     eax, [ebx]
0x6A1984: lea     edi, [eax+30h]
0x6A1987: mov     ecx, 9
0x6A198C: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6A1991: rep movsd
0x6A1993: xor     edi, edi
0x6A1995: cmp     [ebp+3Ch], edi
0x6A1998: lea     esi, [ebp+3Ch]
0x6A199B: jnz     loc_6A1A64
0x6A19A1: mov     [esp+150h+var_138], edi
0x6A19A5: mov     edi, [ebp+34h]
0x6A19A8: add     edi, 104h
0x6A19AE: mov     ecx, edi
0x6A19B0: mov     [esp+150h+var_4], 1
0x6A19BB: call    sub_449190
0x6A19C0: test    eax, eax
0x6A19C2: jbe     loc_6A1A4E
0x6A19C8: mov     edi, [edi+4]
0x6A19CB: test    edi, edi
0x6A19CD: mov     eax, edi
0x6A19CF: jnz     short loc_6A19D6
0x6A19D1: mov     eax, offset EmptyString
0x6A19D6: push    eax
0x6A19D7: push    offset aTextures; "Textures"
0x6A19DC: lea     edx, [esp+158h+ArgList]
0x6A19E0: push    offset aSS_2; "%s\\%s"
0x6A19E5: push    edx
0x6A19E6: call    __sprintf
0x6A19EB: add     esp, 10h
0x6A19EE: push    0; char
0x6A19F0: push    0; char
0x6A19F2: lea     eax, [esp+158h+ArgList]
0x6A19F6: push    eax; ArgList
0x6A19F7: lea     ecx, [esp+15Ch+var_128]
0x6A19FB: push    ecx; int
0x6A19FC: mov     ecx, ds:0B333A0h
0x6A1A02: call    sub_442890
0x6A1A07: push    eax
0x6A1A08: lea     ecx, [esp+154h+var_138]
0x6A1A0C: mov     byte ptr [esp+154h+var_4], 2
0x6A1A14: call    sub_55E2A0
0x6A1A19: lea     ecx, [esp+150h+var_128]; this
0x6A1A1D: mov     byte ptr [esp+150h+var_4], 1
0x6A1A25: call    sub_7016A0
0x6A1A2A: fld     dword ptr [ebp+38h]
0x6A1A2D: mov     edx, [esp+150h+var_138]
0x6A1A31: mov     eax, [ebx]
0x6A1A33: push    ecx
0x6A1A34: mov     ecx, [esp+154h+var_134]
0x6A1A38: fstp    [esp+154h+var_154]; float
0x6A1A3B: push    edx; int
0x6A1A3C: push    ecx; int
0x6A1A3D: mov     ecx, [ebp+34h]
0x6A1A40: push    eax; int
0x6A1A41: call    sub_4AD990
0x6A1A46: push    eax; a2
0x6A1A47: mov     ecx, esi; this
0x6A1A49: call    NiSmartPointer_Set??
0x6A1A4E: lea     ecx, [esp+150h+var_138]; this
0x6A1A52: mov     [esp+150h+var_4], 0FFFFFFFFh
0x6A1A5D: call    sub_7016A0
0x6A1A62: xor     edi, edi
0x6A1A64: mov     eax, [esi]
0x6A1A66: cmp     eax, edi
0x6A1A68: jz      loc_6A1B31
0x6A1A6E: cmp     [esp+150h+var_13A], 0
0x6A1A73: jz      short loc_6A1A83
0x6A1A75: fld     [esp+150h+var_12C]
0x6A1A79: mov     dword ptr [eax+70h], 2
0x6A1A80: fstp    dword ptr [eax+74h]
0x6A1A83: cmp     byte ptr [ebp+28h], 0
0x6A1A87: jz      short loc_6A1A8F
0x6A1A89: mov     eax, [esi]
0x6A1A8B: mov     byte ptr [eax+78h], 0
0x6A1A8F: mov     ecx, [ebp+1Ch]
0x6A1A92: cmp     ecx, edi
0x6A1A94: jz      short loc_6A1AE1
0x6A1A96: mov     edx, [ecx]
0x6A1A98: mov     eax, [edx+170h]
0x6A1A9E: push    edi; int
0x6A1A9F: push    offset ??_R0?AVTESObjectACTI@@@8; struct TypeDescriptor *
0x6A1AA4: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A1AA9: push    edi; int
0x6A1AAA: call    eax
0x6A1AAC: push    eax; void *
0x6A1AAD: call    OblivionDynamicCast
0x6A1AB2: add     esp, 14h
0x6A1AB5: cmp     [esp+150h+var_139], 0
0x6A1ABA: jnz     short loc_6A1AC0
0x6A1ABC: cmp     eax, edi
0x6A1ABE: jz      short loc_6A1AE1
0x6A1AC0: mov     ecx, [ebp+1Ch]
0x6A1AC3: cmp     ecx, ds:0B333C4h
0x6A1AC9: jnz     short loc_6A1AD8
0x6A1ACB: cmp     byte ptr [ebp+44h], 0
0x6A1ACF: jnz     short loc_6A1AD8
0x6A1AD1: mov     eax, [esi]
0x6A1AD3: mov     [eax+70h], edi
0x6A1AD6: jmp     short loc_6A1AE1
0x6A1AD8: mov     eax, [esi]
0x6A1ADA: mov     dword ptr [eax+70h], 1
0x6A1AE1: mov     edx, [esp+150h+var_134]
0x6A1AE5: mov     ecx, [esi]
0x6A1AE7: push    edx
0x6A1AE8: call    sub_7E5C30
0x6A1AED: cmp     [esp+150h+var_13B], 0
0x6A1AF2: jz      short loc_6A1B31
0x6A1AF4: mov     ecx, [esi]
0x6A1AF6: fldz
0x6A1AF8: push    ecx
0x6A1AF9: fstp    [esp+154h+var_154]; float
0x6A1AFC: call    sub_7E4800
0x6A1B01: fld     dword ptr [ebp+38h]
0x6A1B04: fsub    qword ptr ds:0A76540h
0x6A1B0A: mov     ecx, [esi]
0x6A1B0C: push    1; char
0x6A1B0E: push    edi; char
0x6A1B0F: push    ecx
0x6A1B10: fstp    [esp+15Ch+var_128]
0x6A1B14: fld     [esp+15Ch+var_128]
0x6A1B18: fstp    [esp+15Ch+var_15C]; float
0x6A1B1B: call    sub_7E51F0
0x6A1B20: mov     ecx, [esi]
0x6A1B22: fld     dword ptr [ebp+38h]
0x6A1B25: push    1; char
0x6A1B27: push    edi; char
0x6A1B28: push    ecx
0x6A1B29: fstp    [esp+15Ch+var_15C]; float
0x6A1B2C: call    sub_7E51F0
0x6A1B31: mov     eax, [ebp+0]
0x6A1B34: mov     edx, [eax+70h]
0x6A1B37: mov     ecx, ebp
0x6A1B39: call    edx
0x6A1B3B: jmp     short loc_6A1B77
0x6A1B3D: mov     ecx, [ebp+3Ch]
0x6A1B40: cmp     ecx, edi
0x6A1B42: lea     esi, [ebp+3Ch]
0x6A1B45: jz      short loc_6A1B77
0x6A1B47: mov     eax, [ebp+40h]
0x6A1B4A: cmp     eax, edi
0x6A1B4C: lea     ebx, [ebp+40h]
0x6A1B4F: jz      short loc_6A1B77
0x6A1B51: push    ecx
0x6A1B52: mov     ecx, [ebp+34h]
0x6A1B55: push    eax
0x6A1B56: call    sub_4AC740
0x6A1B5B: push    edi; a2
0x6A1B5C: mov     ecx, esi; this
0x6A1B5E: call    NiSmartPointer_Set??
0x6A1B63: mov     ecx, [ebx]
0x6A1B65: cmp     ecx, edi
0x6A1B67: jz      short loc_6A1B6F
0x6A1B69: push    edi
0x6A1B6A: call    sub_7074B0
0x6A1B6F: push    edi; a2
0x6A1B70: mov     ecx, ebx; this
0x6A1B72: call    NiSmartPointer_Set??
0x6A1B77: mov     ecx, [ebp+34h]
0x6A1B7A: push    1
0x6A1B7C: call    sub_4AC730
0x6A1B81: test    al, al
0x6A1B83: jnz     loc_6A1C5F
0x6A1B89: cmp     dword ptr [ebp+48h], 0
0x6A1B8D: lea     edi, [ebp+48h]
0x6A1B90: jnz     loc_6A1C4D
0x6A1B96: mov     [esp+150h+var_138], 0
0x6A1B9E: mov     ebx, [ebp+34h]
0x6A1BA1: add     ebx, 0F8h ; 'ø'
0x6A1BA7: mov     ecx, ebx
0x6A1BA9: mov     [esp+150h+var_4], 3
0x6A1BB4: call    sub_449190
0x6A1BB9: test    eax, eax
0x6A1BBB: jbe     short loc_6A1C1F
0x6A1BBD: mov     ebx, [ebx+4]
0x6A1BC0: test    ebx, ebx
0x6A1BC2: mov     eax, ebx
0x6A1BC4: jnz     short loc_6A1BCB
0x6A1BC6: mov     eax, offset EmptyString
0x6A1BCB: push    eax
0x6A1BCC: push    offset aTextures; "Textures"
0x6A1BD1: lea     eax, [esp+158h+ArgList]
0x6A1BD5: push    offset aSS_2; "%s\\%s"
0x6A1BDA: push    eax
0x6A1BDB: call    __sprintf
0x6A1BE0: add     esp, 10h
0x6A1BE3: push    0; char
0x6A1BE5: push    0; char
0x6A1BE7: lea     ecx, [esp+158h+ArgList]
0x6A1BEB: push    ecx; ArgList
0x6A1BEC: mov     ecx, ds:0B333A0h
0x6A1BF2: lea     edx, [esp+15Ch+var_124]
0x6A1BF6: push    edx; int
0x6A1BF7: call    sub_442890
0x6A1BFC: push    eax
0x6A1BFD: lea     ecx, [esp+154h+var_138]
0x6A1C01: mov     byte ptr [esp+154h+var_4], 4
0x6A1C09: call    sub_55E2A0
0x6A1C0E: lea     ecx, [esp+150h+var_124]; this
0x6A1C12: mov     byte ptr [esp+150h+var_4], 3
0x6A1C1A: call    sub_7016A0
0x6A1C1F: mov     eax, [esp+150h+var_138]
0x6A1C23: mov     ecx, [esp+150h+var_130]
0x6A1C27: push    eax
0x6A1C28: push    ecx
0x6A1C29: mov     ecx, [ebp+34h]
0x6A1C2C: call    sub_4ACB20
0x6A1C31: push    eax; a2
0x6A1C32: mov     ecx, edi; this
0x6A1C34: call    NiSmartPointer_Set??
0x6A1C39: lea     ecx, [esp+150h+var_138]; this
0x6A1C3D: mov     [esp+150h+var_4], 0FFFFFFFFh
0x6A1C48: call    sub_7016A0
0x6A1C4D: mov     edx, [edi]
0x6A1C4F: mov     eax, [esp+150h+var_130]
0x6A1C53: mov     ecx, [ebp+34h]
0x6A1C56: push    edx
0x6A1C57: push    eax
0x6A1C58: call    sub_4AD9E0
0x6A1C5D: xor     edi, edi
0x6A1C5F: cmp     [esi], edi
0x6A1C61: jnz     short loc_6A1C68
0x6A1C63: cmp     [ebp+48h], edi
0x6A1C66: jz      short loc_6A1C6C
0x6A1C68: mov     al, 1
0x6A1C6A: jmp     short loc_6A1C6E
0x6A1C6C: xor     al, al
0x6A1C6E: mov     ecx, [esp+150h+var_C]
0x6A1C75: mov     large fs:0, ecx
0x6A1C7C: pop     ecx
0x6A1C7D: pop     edi
0x6A1C7E: pop     esi
0x6A1C7F: pop     ebp
0x6A1C80: pop     ebx
0x6A1C81: mov     ecx, [esp+13Ch+var_10]
0x6A1C88: xor     ecx, esp
0x6A1C8A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A1C8F: add     esp, 13Ch
0x6A1C95: retn
