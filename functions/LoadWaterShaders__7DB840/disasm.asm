0x7DB840: sub     esp, 874h
0x7DB846: mov     eax, ds:0B30AACh
0x7DB84B: xor     eax, esp
0x7DB84D: mov     [esp+874h+var_4], eax
0x7DB854: push    ebx
0x7DB855: push    ebp
0x7DB856: push    esi
0x7DB857: push    edi
0x7DB858: xor     edi, edi
0x7DB85A: push    3Ch ; '<'
0x7DB85C: lea     eax, [esp+888h+var_394]
0x7DB863: mov     ebp, ecx
0x7DB865: push    edi
0x7DB866: mov     esi, offset aWater2_abVWate; "water\\2_ab\\v\\water.v.hlsl"
0x7DB86B: push    eax
0x7DB86C: mov     [esp+890h+var_870], ebp
0x7DB870: mov     [esp+890h+FullPath], esi
0x7DB877: mov     [esp+890h+var_3A0], edi
0x7DB87E: mov     [esp+890h+var_39C], edi
0x7DB885: mov     [esp+890h+var_398], edi
0x7DB88C: call    __memset
0x7DB891: push    3Ch ; '<'
0x7DB893: mov     [esp+894h+var_358], esi
0x7DB89A: lea     ecx, [esp+894h+var_348]
0x7DB8A1: push    edi
0x7DB8A2: mov     esi, offset EmptyString
0x7DB8A7: push    ecx
0x7DB8A8: mov     [esp+89Ch+var_354], offset aWading; "WADING"
0x7DB8B3: mov     [esp+89Ch+var_350], esi
0x7DB8BA: mov     [esp+89Ch+var_34C], edi
0x7DB8C1: call    __memset
0x7DB8C6: mov     eax, [esp+89Ch+FullPath]
0x7DB8CD: lea     edx, [esp+89Ch+FileName]
0x7DB8D4: push    edx; int
0x7DB8D5: push    eax; FullPath
0x7DB8D6: call    sub_801030
0x7DB8DB: lea     ecx, [esp+8A4h+var_20C]
0x7DB8E2: push    offset aWater000_vso; "WATER000.vso"
0x7DB8E7: push    ecx
0x7DB8E8: call    __sprintf
0x7DB8ED: add     esp, 28h
0x7DB8F0: push    edi; int
0x7DB8F1: push    edi; int
0x7DB8F2: lea     edx, [esp+88Ch+var_20C]
0x7DB8F9: push    edx; int
0x7DB8FA: push    offset aVs_1_1; "vs_1_1"
0x7DB8FF: lea     eax, [esp+894h+var_3A0]
0x7DB906: push    eax; int
0x7DB907: lea     ecx, [esp+898h+FileName]
0x7DB90E: push    ecx; lpFileName
0x7DB90F: mov     ecx, ebp
0x7DB911: call    CreateVertexShader
0x7DB916: mov     ebx, [ebp+0BCh]
0x7DB91C: cmp     ebx, eax
0x7DB91E: mov     [esp+884h+var_874], eax
0x7DB922: jz      short loc_7DB95C
0x7DB924: cmp     ebx, edi
0x7DB926: jz      short loc_7DB948
0x7DB928: lea     edx, [ebx+4]
0x7DB92B: push    edx; lpAddend
0x7DB92C: call    dword ptr ds:0A2807Ch
0x7DB932: test    eax, eax
0x7DB934: jnz     short loc_7DB944
0x7DB936: cmp     ebx, edi
0x7DB938: jz      short loc_7DB944
0x7DB93A: mov     eax, [ebx]
0x7DB93C: mov     edx, [eax]
0x7DB93E: push    1
0x7DB940: mov     ecx, ebx
0x7DB942: call    edx
0x7DB944: mov     eax, [esp+884h+var_874]
0x7DB948: cmp     eax, edi
0x7DB94A: mov     [ebp+0BCh], eax
0x7DB950: jz      short loc_7DB95C
0x7DB952: add     eax, 4
0x7DB955: push    eax; lpAddend
0x7DB956: call    dword ptr ds:0A28078h
0x7DB95C: mov     ecx, [esp+884h+var_358]
0x7DB963: lea     eax, [esp+884h+FileName]
0x7DB96A: push    eax; int
0x7DB96B: push    ecx; FullPath
0x7DB96C: call    sub_801030
0x7DB971: lea     edx, [esp+88Ch+var_20C]
0x7DB978: push    offset aWater001_vso; "WATER001.vso"
0x7DB97D: push    edx
0x7DB97E: call    __sprintf
0x7DB983: add     esp, 10h
0x7DB986: push    edi; int
0x7DB987: push    edi; int
0x7DB988: lea     eax, [esp+88Ch+var_20C]
0x7DB98F: push    eax; int
0x7DB990: push    offset aVs_1_1; "vs_1_1"
0x7DB995: lea     ecx, [esp+894h+var_354]
0x7DB99C: push    ecx; int
0x7DB99D: lea     edx, [esp+898h+FileName]
0x7DB9A4: push    edx; lpFileName
0x7DB9A5: mov     ecx, ebp
0x7DB9A7: call    CreateVertexShader
0x7DB9AC: mov     ebx, [ebp+0C0h]
0x7DB9B2: cmp     ebx, eax
0x7DB9B4: mov     [esp+884h+var_874], eax
0x7DB9B8: jz      short loc_7DB9F2
0x7DB9BA: cmp     ebx, edi
0x7DB9BC: jz      short loc_7DB9DE
0x7DB9BE: lea     eax, [ebx+4]
0x7DB9C1: push    eax; lpAddend
0x7DB9C2: call    dword ptr ds:0A2807Ch
0x7DB9C8: test    eax, eax
0x7DB9CA: jnz     short loc_7DB9DA
0x7DB9CC: cmp     ebx, edi
0x7DB9CE: jz      short loc_7DB9DA
0x7DB9D0: mov     edx, [ebx]
0x7DB9D2: mov     eax, [edx]
0x7DB9D4: push    1
0x7DB9D6: mov     ecx, ebx
0x7DB9D8: call    eax
0x7DB9DA: mov     eax, [esp+884h+var_874]
0x7DB9DE: cmp     eax, edi
0x7DB9E0: mov     [ebp+0C0h], eax
0x7DB9E6: jz      short loc_7DB9F2
0x7DB9E8: add     eax, 4
0x7DB9EB: push    eax; lpAddend
0x7DB9EC: call    dword ptr ds:0A28078h
0x7DB9F2: mov     eax, ds:0B42F48h
0x7DB9F7: cmp     eax, 2
0x7DB9FA: mov     [esp+884h+Str1], offset aPs_1_3; "ps_1_3"
0x7DBA02: jl      short loc_7DBA0C
0x7DBA04: mov     [esp+884h+Str1], offset aPs_2_0; "ps_2_0"
0x7DBA0C: cmp     eax, 4
0x7DBA0F: jle     short loc_7DBA20
0x7DBA11: push    offset aWater2_abPWate; "water\\2_ab\\p\\water.p.hlsl"
0x7DBA16: lea     ecx, [esp+888h+var_30C]
0x7DBA1D: push    ecx
0x7DBA1E: jmp     short loc_7DBA2D
0x7DBA20: push    offset aWater2_0PWater; "water\\2_0\\p\\water.p.hlsl"
0x7DBA25: lea     edx, [esp+888h+var_30C]
0x7DBA2C: push    edx
0x7DBA2D: call    __sprintf
0x7DBA32: lea     eax, [esp+88Ch+var_30C]
0x7DBA39: add     esp, 8
0x7DBA3C: mov     [esp+884h+var_864], eax
0x7DBA40: xor     eax, eax
0x7DBA42: push    2Ch ; ','
0x7DBA44: mov     [esp+888h+var_83C], eax
0x7DBA48: mov     [esp+888h+var_838], eax
0x7DBA4C: mov     [esp+888h+var_834], eax
0x7DBA50: mov     [esp+888h+var_830], eax
0x7DBA54: mov     [esp+888h+var_82C], eax
0x7DBA58: mov     [esp+888h+var_828], eax
0x7DBA5C: mov     [esp+888h+var_824], eax
0x7DBA60: mov     [esp+888h+var_820], eax
0x7DBA64: mov     [esp+888h+var_81C], eax
0x7DBA68: mov     ecx, offset aReflections; "REFLECTIONS"
0x7DBA6D: lea     eax, [esp+888h+var_7F8]
0x7DBA74: mov     ebp, offset aWater; "WATER"
0x7DBA79: mov     ebx, offset off_A90D88
0x7DBA7E: lea     edx, [esp+888h+var_30C]
0x7DBA85: push    edi
0x7DBA86: push    eax
0x7DBA87: mov     [esp+890h+var_860], ebp
0x7DBA8B: mov     [esp+890h+var_85C], esi
0x7DBA8F: mov     [esp+890h+var_858], ecx
0x7DBA93: mov     [esp+890h+var_854], esi
0x7DBA97: mov     [esp+890h+var_850], offset aDepth_0; "DEPTH"
0x7DBA9F: mov     [esp+890h+var_84C], esi
0x7DBAA3: mov     [esp+890h+var_848], ebx
0x7DBAA7: mov     [esp+890h+var_844], esi
0x7DBAAB: mov     [esp+890h+var_840], edi
0x7DBAAF: mov     [esp+890h+var_818], edx
0x7DBAB3: mov     [esp+890h+var_814], ebp
0x7DBAB7: mov     [esp+890h+var_810], esi
0x7DBABE: mov     [esp+890h+var_80C], ecx
0x7DBAC5: mov     [esp+890h+var_808], esi
0x7DBACC: mov     [esp+890h+var_804], ebx
0x7DBAD3: mov     [esp+890h+var_800], esi
0x7DBADA: mov     [esp+890h+var_7FC], edi
0x7DBAE1: call    __memset
0x7DBAE6: push    2Ch ; ','
0x7DBAE8: lea     edx, [esp+894h+var_7AC]
0x7DBAEF: lea     ecx, [esp+894h+var_30C]
0x7DBAF6: push    edi
0x7DBAF7: push    edx
0x7DBAF8: mov     [esp+89Ch+var_7CC], ecx
0x7DBAFF: mov     [esp+89Ch+var_7C8], ebp
0x7DBB06: mov     [esp+89Ch+var_7C4], esi
0x7DBB0D: mov     [esp+89Ch+var_7C0], offset aDepth_0; "DEPTH"
0x7DBB18: mov     [esp+89Ch+var_7BC], esi
0x7DBB1F: mov     [esp+89Ch+var_7B8], ebx
0x7DBB26: mov     [esp+89Ch+var_7B4], esi
0x7DBB2D: mov     [esp+89Ch+var_7B0], edi
0x7DBB34: call    __memset
0x7DBB39: push    34h ; '4'
0x7DBB3B: lea     ecx, [esp+8A0h+var_768]
0x7DBB42: lea     eax, [esp+8A0h+var_30C]
0x7DBB49: push    edi
0x7DBB4A: push    ecx
0x7DBB4B: mov     [esp+8A8h+var_780], eax
0x7DBB52: mov     [esp+8A8h+var_77C], ebp
0x7DBB59: mov     [esp+8A8h+var_778], esi
0x7DBB60: mov     [esp+8A8h+var_774], ebx
0x7DBB67: mov     [esp+8A8h+var_770], esi
0x7DBB6E: mov     [esp+8A8h+var_76C], edi
0x7DBB75: call    __memset
0x7DBB7A: xor     eax, eax
0x7DBB7C: lea     edx, [esp+8A8h+var_30C]
0x7DBB83: mov     ecx, offset aInteriorwater; "INTERIORWATER"
0x7DBB88: mov     [esp+8A8h+var_734], edx
0x7DBB8F: mov     [esp+8A8h+var_730], ebp
0x7DBB96: mov     [esp+8A8h+var_72C], esi
0x7DBB9D: mov     [esp+8A8h+var_728], ecx
0x7DBBA4: mov     [esp+8A8h+var_724], esi
0x7DBBAB: mov     [esp+8A8h+var_720], offset aReflections; "REFLECTIONS"
0x7DBBB6: mov     [esp+8A8h+var_71C], esi
0x7DBBBD: mov     [esp+8A8h+var_718], ebx
0x7DBBC4: mov     [esp+8A8h+var_714], esi
0x7DBBCB: mov     [esp+8A8h+var_710], edi
0x7DBBD2: mov     [esp+8A8h+var_70C], eax
0x7DBBD9: mov     [esp+8A8h+var_708], eax
0x7DBBE0: push    2Ch ; ','
0x7DBBE2: mov     [esp+8ACh+var_6DC], ecx
0x7DBBE9: mov     [esp+8ACh+var_704], eax
0x7DBBF0: mov     [esp+8ACh+var_700], eax
0x7DBBF7: mov     [esp+8ACh+var_6FC], eax
0x7DBBFE: mov     [esp+8ACh+var_6F8], eax
0x7DBC05: mov     [esp+8ACh+var_6F4], eax
0x7DBC0C: mov     [esp+8ACh+var_6F0], eax
0x7DBC13: mov     [esp+8ACh+var_6EC], eax
0x7DBC1A: lea     ecx, [esp+8ACh+var_6C8]
0x7DBC21: mov     eax, edx
0x7DBC23: push    edi
0x7DBC24: push    ecx
0x7DBC25: mov     [esp+8B4h+var_6E8], eax
0x7DBC2C: mov     [esp+8B4h+var_6E4], ebp
0x7DBC33: mov     [esp+8B4h+var_6E0], esi
0x7DBC3A: mov     [esp+8B4h+var_6D8], esi
0x7DBC41: mov     [esp+8B4h+var_6D4], ebx
0x7DBC48: mov     [esp+8B4h+var_6D0], esi
0x7DBC4F: mov     [esp+8B4h+var_6CC], edi
0x7DBC56: call    __memset
0x7DBC5B: push    34h ; '4'
0x7DBC5D: lea     eax, [esp+8B8h+var_684]
0x7DBC64: lea     edx, [esp+8B8h+var_30C]
0x7DBC6B: push    edi
0x7DBC6C: push    eax
0x7DBC6D: mov     [esp+8C0h+var_69C], edx
0x7DBC74: mov     [esp+8C0h+var_698], offset aUnderwater; "UNDERWATER"
0x7DBC7F: mov     [esp+8C0h+var_694], esi
0x7DBC86: mov     [esp+8C0h+var_690], ebx
0x7DBC8D: mov     [esp+8C0h+var_68C], esi
0x7DBC94: mov     [esp+8C0h+var_688], edi
0x7DBC9B: call    __memset
0x7DBCA0: xor     eax, eax
0x7DBCA2: mov     edx, offset aDepth_0; "DEPTH"
0x7DBCA7: mov     [esp+8C0h+var_620], eax
0x7DBCAE: mov     [esp+8C0h+var_61C], eax
0x7DBCB5: mov     [esp+8C0h+var_618], eax
0x7DBCBC: mov     [esp+8C0h+var_614], eax
0x7DBCC3: mov     [esp+8C0h+var_610], eax
0x7DBCCA: mov     [esp+8C0h+var_60C], eax
0x7DBCD1: mov     [esp+8C0h+var_608], eax
0x7DBCD8: lea     ecx, [esp+8C0h+var_30C]
0x7DBCDF: lea     eax, [esp+8C0h+var_30C]
0x7DBCE6: mov     [esp+8C0h+var_650], ecx
0x7DBCED: mov     ecx, offset aWading; "WADING"
0x7DBCF2: mov     [esp+8C0h+var_634], edx
0x7DBCF9: mov     [esp+8C0h+var_604], eax
0x7DBD00: xor     eax, eax
0x7DBD02: mov     [esp+8C0h+var_5F0], edx
0x7DBD09: lea     edx, [esp+8C0h+var_30C]
0x7DBD10: mov     [esp+8C0h+var_64C], ebp
0x7DBD17: mov     [esp+8C0h+var_648], esi
0x7DBD1E: mov     [esp+8C0h+var_644], offset aReflections; "REFLECTIONS"
0x7DBD29: mov     [esp+8C0h+var_640], esi
0x7DBD30: mov     [esp+8C0h+var_63C], ecx
0x7DBD37: mov     [esp+8C0h+var_638], esi
0x7DBD3E: mov     [esp+8C0h+var_630], esi
0x7DBD45: mov     [esp+8C0h+var_62C], ebx
0x7DBD4C: mov     [esp+8C0h+var_628], esi
0x7DBD53: mov     [esp+8C0h+var_624], edi
0x7DBD5A: mov     [esp+8C0h+var_600], ebp
0x7DBD61: mov     [esp+8C0h+var_5FC], esi
0x7DBD68: mov     [esp+8C0h+var_5F8], ecx
0x7DBD6F: mov     [esp+8C0h+var_5F4], esi
0x7DBD76: mov     [esp+8C0h+var_5EC], esi
0x7DBD7D: mov     [esp+8C0h+var_5E8], ebx
0x7DBD84: mov     [esp+8C0h+var_5E4], esi
0x7DBD8B: mov     [esp+8C0h+var_5E0], edi
0x7DBD92: mov     [esp+8C0h+var_5DC], eax
0x7DBD99: mov     [esp+8C0h+var_5D8], eax
0x7DBDA0: mov     [esp+8C0h+var_5D4], eax
0x7DBDA7: mov     [esp+8C0h+var_5D0], eax
0x7DBDAE: mov     [esp+8C0h+var_5CC], eax
0x7DBDB5: mov     [esp+8C0h+var_5C8], eax
0x7DBDBC: mov     [esp+8C0h+var_5C4], eax
0x7DBDC3: mov     [esp+8C0h+var_5C0], eax
0x7DBDCA: mov     [esp+8C0h+var_5BC], eax
0x7DBDD1: mov     [esp+8C0h+var_5B8], edx
0x7DBDD8: mov     [esp+8C0h+var_5B4], ebp
0x7DBDDF: mov     [esp+8C0h+var_5B0], esi
0x7DBDE6: mov     edx, offset aInteriorwater; "INTERIORWATER"
0x7DBDEB: mov     [esp+8C0h+var_588], eax
0x7DBDF2: mov     [esp+8C0h+var_584], eax
0x7DBDF9: mov     [esp+8C0h+var_580], eax
0x7DBE00: mov     [esp+8C0h+var_57C], eax
0x7DBE07: mov     [esp+8C0h+var_578], eax
0x7DBE0E: mov     [esp+8C0h+var_574], eax
0x7DBE15: mov     [esp+8C0h+var_570], eax
0x7DBE1C: lea     eax, [esp+8C0h+var_30C]
0x7DBE23: push    34h ; '4'
0x7DBE25: mov     [esp+8C4h+var_5AC], edx
0x7DBE2C: mov     [esp+8C4h+var_560], edx
0x7DBE33: mov     [esp+8C4h+var_59C], ecx
0x7DBE3A: mov     [esp+8C4h+var_56C], eax
0x7DBE41: xor     eax, eax
0x7DBE43: mov     [esp+8C4h+var_558], ecx
0x7DBE4A: lea     edx, [esp+8C4h+var_508]
0x7DBE51: lea     ecx, [esp+8C4h+var_30C]
0x7DBE58: push    edi
0x7DBE59: push    edx
0x7DBE5A: mov     [esp+8CCh+var_5A8], esi
0x7DBE61: mov     [esp+8CCh+var_5A4], offset aReflections; "REFLECTIONS"
0x7DBE6C: mov     [esp+8CCh+var_5A0], esi
0x7DBE73: mov     [esp+8CCh+var_598], esi
0x7DBE7A: mov     [esp+8CCh+var_594], ebx
0x7DBE81: mov     [esp+8CCh+var_590], esi
0x7DBE88: mov     [esp+8CCh+var_58C], edi
0x7DBE8F: mov     [esp+8CCh+var_568], ebp
0x7DBE96: mov     [esp+8CCh+var_564], esi
0x7DBE9D: mov     [esp+8CCh+var_55C], esi
0x7DBEA4: mov     [esp+8CCh+var_554], esi
0x7DBEAB: mov     [esp+8CCh+var_550], ebx
0x7DBEB2: mov     [esp+8CCh+var_54C], esi
0x7DBEB9: mov     [esp+8CCh+var_548], edi
0x7DBEC0: mov     [esp+8CCh+var_544], eax
0x7DBEC7: mov     [esp+8CCh+var_540], eax
0x7DBECE: mov     [esp+8CCh+var_53C], eax
0x7DBED5: mov     [esp+8CCh+var_538], eax
0x7DBEDC: mov     [esp+8CCh+var_534], eax
0x7DBEE3: mov     [esp+8CCh+var_530], eax
0x7DBEEA: mov     [esp+8CCh+var_52C], eax
0x7DBEF1: mov     [esp+8CCh+var_528], eax
0x7DBEF8: mov     [esp+8CCh+var_524], eax
0x7DBEFF: mov     [esp+8CCh+var_520], ecx
0x7DBF06: mov     [esp+8CCh+var_51C], offset aLava_0; "LAVA"
0x7DBF11: mov     [esp+8CCh+var_518], esi
0x7DBF18: mov     [esp+8CCh+var_514], ebx
0x7DBF1F: mov     [esp+8CCh+var_510], esi
0x7DBF26: mov     [esp+8CCh+var_50C], edi
0x7DBF2D: call    __memset
0x7DBF32: lea     eax, [esp+8CCh+var_30C]
0x7DBF39: add     esp, 48h
0x7DBF3C: mov     [esp+884h+var_4D4], eax
0x7DBF43: xor     eax, eax
0x7DBF45: mov     ecx, offset off_A9186C
0x7DBF4A: lea     edx, [esp+884h+var_30C]
0x7DBF51: mov     [esp+884h+var_4D0], ebp
0x7DBF58: mov     [esp+884h+var_4CC], esi
0x7DBF5F: mov     [esp+884h+var_4C8], offset aReflections; "REFLECTIONS"
0x7DBF6A: mov     [esp+884h+var_4C4], esi
0x7DBF71: mov     [esp+884h+var_4C0], ecx
0x7DBF78: mov     [esp+884h+var_4BC], esi
0x7DBF7F: mov     [esp+884h+var_4B8], ebx
0x7DBF86: mov     [esp+884h+var_4B4], esi
0x7DBF8D: mov     [esp+884h+var_4B0], edi
0x7DBF94: mov     [esp+884h+var_4AC], eax
0x7DBF9B: mov     [esp+884h+var_4A8], eax
0x7DBFA2: mov     [esp+884h+var_4A4], eax
0x7DBFA9: mov     [esp+884h+var_4A0], eax
0x7DBFB0: mov     [esp+884h+var_49C], eax
0x7DBFB7: mov     [esp+884h+var_498], eax
0x7DBFBE: mov     [esp+884h+var_494], eax
0x7DBFC5: mov     [esp+884h+var_490], eax
0x7DBFCC: mov     [esp+884h+var_48C], eax
0x7DBFD3: mov     [esp+884h+var_488], edx
0x7DBFDA: mov     [esp+884h+var_484], ebp
0x7DBFE1: mov     [esp+884h+var_480], esi
0x7DBFE8: mov     [esp+884h+var_47C], ecx
0x7DBFEF: mov     [esp+884h+var_478], esi
0x7DBFF6: mov     [esp+884h+var_474], ebx
0x7DBFFD: mov     [esp+884h+var_470], esi
0x7DC004: push    2Ch ; ','
0x7DC006: lea     eax, [esp+888h+var_468]
0x7DC00D: push    edi
0x7DC00E: push    eax
0x7DC00F: mov     [esp+890h+var_46C], edi
0x7DC016: call    __memset
0x7DC01B: push    2Ch ; ','
0x7DC01D: lea     edx, [esp+894h+var_41C]
0x7DC024: lea     ecx, [esp+894h+var_30C]
0x7DC02B: push    edi
0x7DC02C: push    edx
0x7DC02D: mov     [esp+89Ch+var_43C], ecx
0x7DC034: mov     [esp+89Ch+var_438], offset aLava_0; "LAVA"
0x7DC03F: mov     [esp+89Ch+var_434], esi
0x7DC046: mov     [esp+89Ch+var_430], offset aLod_lava; "LOD_LAVA"
0x7DC051: mov     [esp+89Ch+var_42C], esi
0x7DC058: mov     [esp+89Ch+var_428], ebx
0x7DC05F: mov     [esp+89Ch+var_424], esi
0x7DC066: mov     [esp+89Ch+var_420], edi
0x7DC06D: call    __memset
0x7DC072: push    34h ; '4'
0x7DC074: lea     ecx, [esp+8A0h+var_3D8]
0x7DC07B: lea     eax, [esp+8A0h+var_30C]
0x7DC082: push    edi
0x7DC083: push    ecx
0x7DC084: mov     [esp+8A8h+var_3F0], eax
0x7DC08B: mov     [esp+8A8h+var_3EC], ebp
0x7DC092: mov     [esp+8A8h+var_3E8], esi
0x7DC099: mov     [esp+8A8h+var_3E4], offset aReflections; "REFLECTIONS"
0x7DC0A4: mov     [esp+8A8h+var_3E0], esi
0x7DC0AB: mov     [esp+8A8h+var_3DC], edi
0x7DC0B2: call    __memset
0x7DC0B7: mov     edx, [esp+8A8h+var_870]
0x7DC0BB: add     esp, 24h
0x7DC0BE: xor     ebx, ebx
0x7DC0C0: lea     esi, [esp+884h+var_864]
0x7DC0C4: add     edx, 0C4h ; 'Ä'
0x7DC0CA: mov     [esp+884h+var_86C], esi
0x7DC0CE: mov     [esp+884h+var_874], edx
0x7DC0D2: mov     eax, [esi]
0x7DC0D4: cmp     eax, edi
0x7DC0D6: jz      loc_7DC165
0x7DC0DC: lea     ecx, [esp+884h+FileName]
0x7DC0E3: push    ecx; int
0x7DC0E4: push    eax; FullPath
0x7DC0E5: call    sub_801030
0x7DC0EA: push    ebx
0x7DC0EB: lea     edx, [esp+890h+var_20C]
0x7DC0F2: push    offset aWater03i_pso; "WATER%03i.pso"
0x7DC0F7: push    edx
0x7DC0F8: call    __sprintf
0x7DC0FD: mov     ecx, [esp+898h+Str1]
0x7DC101: add     esp, 14h
0x7DC104: push    1; int
0x7DC106: push    edi; int
0x7DC107: lea     eax, [esp+88Ch+var_20C]
0x7DC10E: push    eax; int
0x7DC10F: push    ecx; Str1
0x7DC110: mov     ecx, [esp+894h+var_870]
0x7DC114: add     esi, 4
0x7DC117: push    esi; int
0x7DC118: lea     edx, [esp+898h+FileName]
0x7DC11F: push    edx; lpFileName
0x7DC120: call    CreatePixelShader
0x7DC125: mov     ebp, eax
0x7DC127: mov     eax, [esp+884h+var_874]
0x7DC12B: mov     esi, [eax]
0x7DC12D: cmp     esi, ebp
0x7DC12F: jz      short loc_7DC165
0x7DC131: cmp     esi, edi
0x7DC133: jz      short loc_7DC151
0x7DC135: lea     ecx, [esi+4]
0x7DC138: push    ecx; lpAddend
0x7DC139: call    dword ptr ds:0A2807Ch
0x7DC13F: test    eax, eax
0x7DC141: jnz     short loc_7DC151
0x7DC143: cmp     esi, edi
0x7DC145: jz      short loc_7DC151
0x7DC147: mov     edx, [esi]
0x7DC149: mov     eax, [edx]
0x7DC14B: push    1
0x7DC14D: mov     ecx, esi
0x7DC14F: call    eax
0x7DC151: cmp     ebp, edi
0x7DC153: mov     ecx, [esp+884h+var_874]
0x7DC157: mov     [ecx], ebp
0x7DC159: jz      short loc_7DC165
0x7DC15B: add     ebp, 4
0x7DC15E: push    ebp; lpAddend
0x7DC15F: call    dword ptr ds:0A28078h
0x7DC165: mov     esi, [esp+884h+var_86C]
0x7DC169: add     [esp+884h+var_874], 4
0x7DC16E: add     ebx, 1
0x7DC171: add     esi, 4Ch ; 'L'
0x7DC174: cmp     ebx, 10h
0x7DC177: mov     [esp+884h+var_86C], esi
0x7DC17B: jl      loc_7DC0D2
0x7DC181: mov     ecx, [esp+884h+var_4]
0x7DC188: pop     edi
0x7DC189: pop     esi
0x7DC18A: pop     ebp
0x7DC18B: pop     ebx
0x7DC18C: xor     ecx, esp
0x7DC18E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DC193: add     esp, 874h
0x7DC199: retn
