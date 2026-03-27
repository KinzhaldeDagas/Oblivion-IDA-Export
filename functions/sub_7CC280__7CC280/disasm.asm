0x7CC280: push    0FFFFFFFFh
0x7CC282: push    offset SEH_7CC280
0x7CC287: mov     eax, large fs:0
0x7CC28D: push    eax
0x7CC28E: sub     esp, 8
0x7CC291: push    ebx
0x7CC292: push    ebp
0x7CC293: push    esi
0x7CC294: push    edi
0x7CC295: mov     eax, ds:0B30AACh
0x7CC29A: xor     eax, esp
0x7CC29C: push    eax
0x7CC29D: lea     eax, [esp+28h+var_C]
0x7CC2A1: mov     large fs:0, eax
0x7CC2A7: mov     ebx, ecx
0x7CC2A9: mov     [esp+28h+var_14], ebx
0x7CC2AD: lea     esi, [ebx+30h]
0x7CC2B0: or      ebp, 0FFFFFFFFh
0x7CC2B3: cmp     dword ptr [esi], 0
0x7CC2B6: jnz     loc_7CCA43
0x7CC2BC: push    34h ; '4'; Size
0x7CC2BE: call    FormHeapAlloc
0x7CC2C3: add     esp, 4
0x7CC2C6: mov     [esp+28h+var_10], eax
0x7CC2CA: test    eax, eax
0x7CC2CC: mov     [esp+28h+var_4], 0
0x7CC2D4: jz      short loc_7CC2E3
0x7CC2D6: mov     ecx, [ebx+14h]
0x7CC2D9: push    ecx
0x7CC2DA: mov     ecx, eax
0x7CC2DC: call    NiD3DShaderCostantMapVertex__Construct
0x7CC2E1: jmp     short loc_7CC2E5
0x7CC2E3: xor     eax, eax
0x7CC2E5: push    eax; a2
0x7CC2E6: mov     ecx, esi; this
0x7CC2E8: mov     [esp+2Ch+var_4], ebp
0x7CC2EC: call    NiSmartPointer_Set??
0x7CC2F1: mov     ecx, [esi]
0x7CC2F3: mov     edx, [ecx]
0x7CC2F5: mov     eax, [edx+1Ch]
0x7CC2F8: push    offset EmptyString
0x7CC2FD: push    0
0x7CC2FF: push    20000009h
0x7CC304: push    offset aWorldviewprojt
0x7CC309: call    eax
0x7CC30B: mov     ecx, [esi]
0x7CC30D: mov     edx, [ecx]
0x7CC30F: mov     eax, [edx+1Ch]
0x7CC312: push    offset EmptyString
0x7CC317: push    1
0x7CC319: push    20000009h
0x7CC31E: push    offset aSkinworldviewp
0x7CC323: call    eax
0x7CC325: mov     ecx, [esi]
0x7CC327: mov     edx, [ecx]
0x7CC329: mov     eax, [edx+18h]
0x7CC32C: push    0
0x7CC32E: push    offset unk_B45560
0x7CC333: push    4
0x7CC335: push    40h ; '@'
0x7CC337: push    offset EmptyString
0x7CC33C: push    4
0x7CC33E: push    1Ch
0x7CC340: push    0
0x7CC342: push    10000009h
0x7CC347: push    offset aShadowproj
0x7CC34C: call    eax
0x7CC34E: mov     ecx, [esi]
0x7CC350: mov     edx, [ecx]
0x7CC352: mov     eax, [edx+18h]
0x7CC355: push    0
0x7CC357: push    offset unk_B44F98
0x7CC35C: push    4
0x7CC35E: push    40h ; '@'
0x7CC360: push    offset EmptyString
0x7CC365: push    4
0x7CC367: push    9
0x7CC369: push    0
0x7CC36B: push    10000009h
0x7CC370: push    offset aSkinworldtrans
0x7CC375: call    eax
0x7CC377: mov     ecx, [esi]
0x7CC379: mov     edx, [ecx]
0x7CC37B: mov     eax, [edx+18h]
0x7CC37E: push    0
0x7CC380: push    offset unk_B45498
0x7CC385: push    4
0x7CC387: push    40h ; '@'
0x7CC389: push    offset EmptyString
0x7CC38E: push    4
0x7CC390: push    8
0x7CC392: push    0
0x7CC394: push    10000009h
0x7CC399: push    offset aWorldtranspose
0x7CC39E: call    eax
0x7CC3A0: mov     ecx, [esi]
0x7CC3A2: mov     edx, [ecx]
0x7CC3A4: mov     eax, [edx+18h]
0x7CC3A7: push    0
0x7CC3A9: push    offset flt_B44EE8
0x7CC3AE: push    4
0x7CC3B0: push    10h
0x7CC3B2: push    offset EmptyString
0x7CC3B7: push    1
0x7CC3B9: push    20h ; ' '
0x7CC3BB: push    0
0x7CC3BD: push    10000007h
0x7CC3C2: push    offset aShadowprojdata
0x7CC3C7: call    eax
0x7CC3C9: mov     ecx, [esi]
0x7CC3CB: mov     edx, [ecx]
0x7CC3CD: push    0
0x7CC3CF: push    offset flt_B44EF8
0x7CC3D4: push    4
0x7CC3D6: mov     eax, [edx+18h]
0x7CC3D9: push    10h
0x7CC3DB: push    offset EmptyString
0x7CC3E0: push    1
0x7CC3E2: push    21h ; '!'
0x7CC3E4: push    0
0x7CC3E6: push    10000007h
0x7CC3EB: push    offset aShadowprojtran
0x7CC3F0: call    eax
0x7CC3F2: mov     ecx, [esi]
0x7CC3F4: mov     edx, [ecx]
0x7CC3F6: mov     eax, [edx+18h]
0x7CC3F9: push    0
0x7CC3FB: push    offset unk_B46698
0x7CC400: push    4
0x7CC402: push    10h
0x7CC404: push    offset EmptyString
0x7CC409: push    1
0x7CC40B: push    0Ch
0x7CC40D: push    0
0x7CC40F: push    10000007h
0x7CC414: push    offset aHighdetailrang
0x7CC419: call    eax
0x7CC41B: mov     ecx, [esi]
0x7CC41D: mov     edx, [ecx]
0x7CC41F: mov     eax, [edx+18h]
0x7CC422: push    0
0x7CC424: push    offset flt_B454D8
0x7CC429: push    4
0x7CC42B: push    10h
0x7CC42D: push    offset EmptyString
0x7CC432: push    1
0x7CC434: push    0Dh
0x7CC436: push    0
0x7CC438: push    10000007h
0x7CC43D: push    offset aDirectronallig
0x7CC442: call    eax
0x7CC444: mov     ecx, [esi]
0x7CC446: mov     edx, [ecx]
0x7CC448: mov     eax, [edx+18h]
0x7CC44B: push    0
0x7CC44D: push    offset flt_B454E8
0x7CC452: push    4
0x7CC454: push    10h
0x7CC456: push    offset EmptyString
0x7CC45B: push    1
0x7CC45D: push    0Eh
0x7CC45F: push    0
0x7CC461: push    10000007h
0x7CC466: push    offset aDirectronall_0
0x7CC46B: call    eax
0x7CC46D: mov     ecx, [esi]
0x7CC46F: mov     edx, [ecx]
0x7CC471: mov     eax, [edx+18h]
0x7CC474: push    0
0x7CC476: push    offset dword_B44FD8
0x7CC47B: push    4
0x7CC47D: push    10h
0x7CC47F: push    offset EmptyString
0x7CC484: push    1
0x7CC486: push    10h
0x7CC488: push    0
0x7CC48A: push    10000007h
0x7CC48F: push    offset aPointlightpos0
0x7CC494: call    eax
0x7CC496: mov     ecx, [esi]
0x7CC498: mov     edx, [ecx]
0x7CC49A: mov     eax, [edx+18h]
0x7CC49D: push    0
0x7CC49F: push    offset flt_B44FE8
0x7CC4A4: push    4
0x7CC4A6: push    10h
0x7CC4A8: push    offset EmptyString
0x7CC4AD: push    1
0x7CC4AF: push    11h
0x7CC4B1: push    0
0x7CC4B3: push    10000007h
0x7CC4B8: push    offset aPointlightpos1
0x7CC4BD: call    eax
0x7CC4BF: mov     ecx, [esi]
0x7CC4C1: mov     edx, [ecx]
0x7CC4C3: mov     eax, [edx+18h]
0x7CC4C6: push    0
0x7CC4C8: push    offset flt_B44FF8
0x7CC4CD: push    4
0x7CC4CF: push    10h
0x7CC4D1: push    offset EmptyString
0x7CC4D6: push    1
0x7CC4D8: push    12h
0x7CC4DA: push    0
0x7CC4DC: push    10000007h
0x7CC4E1: push    offset aPointlightpos2
0x7CC4E6: call    eax
0x7CC4E8: mov     ecx, [esi]
0x7CC4EA: mov     edx, [ecx]
0x7CC4EC: mov     eax, [edx+18h]
0x7CC4EF: push    0
0x7CC4F1: push    offset dword_B464A8
0x7CC4F6: push    4
0x7CC4F8: push    10h
0x7CC4FA: push    offset EmptyString
0x7CC4FF: push    1
0x7CC501: push    13h
0x7CC503: push    0
0x7CC505: push    10000007h
0x7CC50A: push    offset aDiffusecolor0
0x7CC50F: call    eax
0x7CC511: mov     ecx, [esi]
0x7CC513: mov     edx, [ecx]
0x7CC515: mov     eax, [edx+18h]
0x7CC518: push    0
0x7CC51A: push    offset unk_B464B8
0x7CC51F: push    4
0x7CC521: push    10h
0x7CC523: push    offset EmptyString
0x7CC528: push    1
0x7CC52A: push    14h
0x7CC52C: push    0
0x7CC52E: push    10000007h
0x7CC533: push    offset aDiffusecolor1
0x7CC538: call    eax
0x7CC53A: mov     ecx, [esi]
0x7CC53C: mov     edx, [ecx]
0x7CC53E: mov     eax, [edx+18h]
0x7CC541: push    0
0x7CC543: push    offset unk_B464C8
0x7CC548: push    4
0x7CC54A: push    10h
0x7CC54C: push    offset EmptyString
0x7CC551: push    1
0x7CC553: push    15h
0x7CC555: push    0
0x7CC557: push    10000007h
0x7CC55C: push    offset aDiffusecolor2
0x7CC561: call    eax
0x7CC563: mov     ecx, [esi]
0x7CC565: mov     edx, [ecx]
0x7CC567: mov     eax, [edx+18h]
0x7CC56A: push    0
0x7CC56C: push    offset dword_B46638
0x7CC571: push    4
0x7CC573: push    10h
0x7CC575: push    offset EmptyString
0x7CC57A: push    1
0x7CC57C: push    17h
0x7CC57E: push    0
0x7CC580: push    10000007h
0x7CC585: push    offset aFogparamShadow
0x7CC58A: call    eax
0x7CC58C: mov     ecx, [esi]
0x7CC58E: mov     edx, [ecx]
0x7CC590: mov     eax, [edx+18h]
0x7CC593: push    0
0x7CC595: push    offset dword_B46648
0x7CC59A: push    4
0x7CC59C: push    10h
0x7CC59E: push    offset EmptyString
0x7CC5A3: push    1
0x7CC5A5: push    18h
0x7CC5A7: push    0
0x7CC5A9: push    10000007h
0x7CC5AE: push    offset aFogcolorShadow
0x7CC5B3: call    eax
0x7CC5B5: mov     ecx, [esi]
0x7CC5B7: mov     edx, [ecx]
0x7CC5B9: mov     eax, [edx+18h]
0x7CC5BC: push    0
0x7CC5BE: push    offset flt_B44F08
0x7CC5C3: push    4
0x7CC5C5: push    10h
0x7CC5C7: push    offset EmptyString
0x7CC5CC: push    1
0x7CC5CE: push    19h
0x7CC5D0: push    0
0x7CC5D2: push    10000007h
0x7CC5D7: push    offset aEyeposition
0x7CC5DC: call    eax
0x7CC5DE: mov     ecx, [esi]
0x7CC5E0: mov     edx, [ecx]
0x7CC5E2: mov     eax, [edx+18h]
0x7CC5E5: push    0
0x7CC5E7: push    offset flt_B44F28
0x7CC5EC: push    4
0x7CC5EE: push    10h
0x7CC5F0: push    offset EmptyString
0x7CC5F5: push    1
0x7CC5F7: push    2Eh ; '.'
0x7CC5F9: push    0
0x7CC5FB: push    10000007h
0x7CC600: push    offset aBoundcenter
0x7CC605: call    eax
0x7CC607: mov     ecx, [esi]
0x7CC609: mov     edx, [ecx]
0x7CC60B: mov     eax, [edx+18h]
0x7CC60E: push    0
0x7CC610: push    offset unk_B466B8
0x7CC615: push    4
0x7CC617: push    10h
0x7CC619: push    offset EmptyString
0x7CC61E: push    1
0x7CC620: push    2Fh ; '/'
0x7CC622: push    0
0x7CC624: push    10000007h
0x7CC629: push    offset aLodlandflags
0x7CC62E: call    eax
0x7CC630: mov     ecx, [esi]
0x7CC632: mov     edx, [ecx]
0x7CC634: mov     eax, [edx+18h]
0x7CC637: push    0
0x7CC639: push    0
0x7CC63B: push    0
0x7CC63D: push    0
0x7CC63F: push    0
0x7CC641: push    36h ; '6'
0x7CC643: push    2Ah ; '*'
0x7CC645: push    120000h
0x7CC64A: push    20000009h
0x7CC64F: push    offset aBonematrix3
0x7CC654: call    eax
0x7CC656: mov     ecx, [esi]
0x7CC658: mov     edx, [ecx]
0x7CC65A: mov     eax, [edx+1Ch]
0x7CC65D: push    offset EmptyString
0x7CC662: push    4
0x7CC664: push    20000009h
0x7CC669: push    offset aWorldviewtrans
0x7CC66E: call    eax
0x7CC670: mov     ecx, [esi]
0x7CC672: mov     edx, [ecx]
0x7CC674: mov     eax, [edx+1Ch]
0x7CC677: push    offset EmptyString
0x7CC67C: push    5
0x7CC67E: push    20000009h
0x7CC683: push    offset aSkinworldviewt
0x7CC688: call    eax
0x7CC68A: mov     ecx, [esi]
0x7CC68C: mov     edx, [ecx]
0x7CC68E: push    0
0x7CC690: push    offset flt_B44EE0
0x7CC695: push    4
0x7CC697: push    4
0x7CC699: push    offset EmptyString
0x7CC69E: push    1
0x7CC6A0: mov     eax, [edx+18h]
0x7CC6A3: push    16h
0x7CC6A5: push    0
0x7CC6A7: push    10000004h
0x7CC6AC: push    offset aTime
0x7CC6B1: call    eax
0x7CC6B3: mov     ecx, [esi]
0x7CC6B5: mov     edx, [ecx]
0x7CC6B7: mov     eax, [edx+38h]
0x7CC6BA: push    offset aWorldviewprojt
0x7CC6BF: call    eax
0x7CC6C1: mov     edi, eax
0x7CC6C3: mov     eax, ds:0B45018h
0x7CC6C8: cmp     eax, edi
0x7CC6CA: jz      short loc_7CC706
0x7CC6CC: test    eax, eax
0x7CC6CE: jz      short loc_7CC6F2
0x7CC6D0: mov     ebx, eax
0x7CC6D2: add     eax, 4
0x7CC6D5: push    eax; lpAddend
0x7CC6D6: call    dword ptr ds:0A2807Ch
0x7CC6DC: test    eax, eax
0x7CC6DE: jnz     short loc_7CC6EE
0x7CC6E0: test    ebx, ebx
0x7CC6E2: jz      short loc_7CC6EE
0x7CC6E4: mov     edx, [ebx]
0x7CC6E6: mov     eax, [edx]
0x7CC6E8: push    1
0x7CC6EA: mov     ecx, ebx
0x7CC6EC: call    eax
0x7CC6EE: mov     ebx, [esp+28h+var_14]
0x7CC6F2: test    edi, edi
0x7CC6F4: mov     ds:0B45018h, edi
0x7CC6FA: jz      short loc_7CC706
0x7CC6FC: add     edi, 4
0x7CC6FF: push    edi; lpAddend
0x7CC700: call    dword ptr ds:0A28078h
0x7CC706: mov     ecx, [esi]
0x7CC708: mov     edx, [ecx]
0x7CC70A: mov     eax, [edx+38h]
0x7CC70D: push    offset aWorldtranspose
0x7CC712: call    eax
0x7CC714: push    eax; a2
0x7CC715: mov     ecx, offset dword_B4501C; this
0x7CC71A: call    NiSmartPointer_Set??
0x7CC71F: mov     ecx, [esi]
0x7CC721: mov     edx, [ecx]
0x7CC723: mov     eax, [edx+38h]
0x7CC726: push    offset aSkinworldtrans
0x7CC72B: call    eax
0x7CC72D: push    eax; a2
0x7CC72E: mov     ecx, offset dword_B45068; this
0x7CC733: call    NiSmartPointer_Set??
0x7CC738: mov     ecx, [esi]
0x7CC73A: mov     edx, [ecx]
0x7CC73C: mov     eax, [edx+38h]
0x7CC73F: push    offset aSkinworldviewp
0x7CC744: call    eax
0x7CC746: push    eax; a2
0x7CC747: mov     ecx, offset dword_B45020; this
0x7CC74C: call    NiSmartPointer_Set??
0x7CC751: mov     ecx, [esi]
0x7CC753: mov     edx, [ecx]
0x7CC755: mov     eax, [edx+38h]
0x7CC758: push    offset aShadowproj
0x7CC75D: call    eax
0x7CC75F: push    eax; a2
0x7CC760: mov     ecx, offset dword_B45024; this
0x7CC765: call    NiSmartPointer_Set??
0x7CC76A: mov     ecx, [esi]
0x7CC76C: mov     edx, [ecx]
0x7CC76E: mov     eax, [edx+38h]
0x7CC771: push    offset aShadowprojdata
0x7CC776: call    eax
0x7CC778: push    eax; a2
0x7CC779: mov     ecx, offset dword_B45028; this
0x7CC77E: call    NiSmartPointer_Set??
0x7CC783: mov     ecx, [esi]
0x7CC785: mov     edx, [ecx]
0x7CC787: mov     eax, [edx+38h]
0x7CC78A: push    offset aShadowprojtran
0x7CC78F: call    eax
0x7CC791: push    eax; a2
0x7CC792: mov     ecx, offset dword_B4502C; this
0x7CC797: call    NiSmartPointer_Set??
0x7CC79C: mov     ecx, [esi]
0x7CC79E: mov     edx, [ecx]
0x7CC7A0: mov     eax, [edx+38h]
0x7CC7A3: push    offset aHighdetailrang
0x7CC7A8: call    eax
0x7CC7AA: push    eax; a2
0x7CC7AB: mov     ecx, offset dword_B45078; this
0x7CC7B0: call    NiSmartPointer_Set??
0x7CC7B5: mov     ecx, [esi]
0x7CC7B7: mov     edx, [ecx]
0x7CC7B9: mov     eax, [edx+38h]
0x7CC7BC: push    offset aDirectronallig
0x7CC7C1: call    eax
0x7CC7C3: push    eax; a2
0x7CC7C4: mov     ecx, offset dword_B45030; this
0x7CC7C9: call    NiSmartPointer_Set??
0x7CC7CE: mov     ecx, [esi]
0x7CC7D0: mov     edx, [ecx]
0x7CC7D2: mov     eax, [edx+38h]
0x7CC7D5: push    offset aDirectronall_0
0x7CC7DA: call    eax
0x7CC7DC: push    eax; a2
0x7CC7DD: mov     ecx, offset dword_B45034; this
0x7CC7E2: call    NiSmartPointer_Set??
0x7CC7E7: mov     ecx, [esi]
0x7CC7E9: mov     edx, [ecx]
0x7CC7EB: mov     eax, [edx+38h]
0x7CC7EE: push    offset aDirectronall_1
0x7CC7F3: call    eax
0x7CC7F5: push    eax; a2
0x7CC7F6: mov     ecx, offset dword_B45038; this
0x7CC7FB: call    NiSmartPointer_Set??
0x7CC800: mov     ecx, [esi]
0x7CC802: mov     edx, [ecx]
0x7CC804: mov     eax, [edx+38h]
0x7CC807: push    offset aDirectronall_2
0x7CC80C: call    eax
0x7CC80E: push    eax; a2
0x7CC80F: mov     ecx, offset dword_B4503C; this
0x7CC814: call    NiSmartPointer_Set??
0x7CC819: mov     ecx, [esi]
0x7CC81B: mov     edx, [ecx]
0x7CC81D: mov     eax, [edx+38h]
0x7CC820: push    offset aPointlightpos0
0x7CC825: call    eax
0x7CC827: push    eax; a2
0x7CC828: mov     ecx, offset dword_B45040; this
0x7CC82D: call    NiSmartPointer_Set??
0x7CC832: mov     ecx, [esi]
0x7CC834: mov     edx, [ecx]
0x7CC836: mov     eax, [edx+38h]
0x7CC839: push    offset aPointlightpos1
0x7CC83E: call    eax
0x7CC840: push    eax; a2
0x7CC841: mov     ecx, offset dword_B45044; this
0x7CC846: call    NiSmartPointer_Set??
0x7CC84B: mov     ecx, [esi]
0x7CC84D: mov     edx, [ecx]
0x7CC84F: mov     eax, [edx+38h]
0x7CC852: push    offset aPointlightpos2
0x7CC857: call    eax
0x7CC859: push    eax; a2
0x7CC85A: mov     ecx, offset dword_B45048; this
0x7CC85F: call    NiSmartPointer_Set??
0x7CC864: mov     ecx, [esi]
0x7CC866: mov     edx, [ecx]
0x7CC868: mov     eax, [edx+38h]
0x7CC86B: push    offset aPointlightpos3
0x7CC870: call    eax
0x7CC872: push    eax; a2
0x7CC873: mov     ecx, offset dword_B4504C; this
0x7CC878: call    NiSmartPointer_Set??
0x7CC87D: mov     ecx, [esi]
0x7CC87F: mov     edx, [ecx]
0x7CC881: mov     eax, [edx+38h]
0x7CC884: push    offset aFogparamShadow
0x7CC889: call    eax
0x7CC88B: push    eax; a2
0x7CC88C: mov     ecx, offset dword_B45050; this
0x7CC891: call    NiSmartPointer_Set??
0x7CC896: mov     ecx, [esi]
0x7CC898: mov     edx, [ecx]
0x7CC89A: mov     eax, [edx+38h]
0x7CC89D: push    offset aFogcolorShadow
0x7CC8A2: call    eax
0x7CC8A4: push    eax; a2
0x7CC8A5: mov     ecx, offset dword_B45054; this
0x7CC8AA: call    NiSmartPointer_Set??
0x7CC8AF: mov     ecx, [esi]
0x7CC8B1: mov     edx, [ecx]
0x7CC8B3: mov     eax, [edx+38h]
0x7CC8B6: push    offset aEyeposition
0x7CC8BB: call    eax
0x7CC8BD: push    eax; a2
0x7CC8BE: mov     ecx, offset dword_B45058; this
0x7CC8C3: call    NiSmartPointer_Set??
0x7CC8C8: mov     ecx, [esi]
0x7CC8CA: mov     edx, [ecx]
0x7CC8CC: mov     eax, [edx+38h]
0x7CC8CF: push    offset aBonematrix3
0x7CC8D4: call    eax
0x7CC8D6: push    eax; a2
0x7CC8D7: mov     ecx, offset dword_B4505C; this
0x7CC8DC: call    NiSmartPointer_Set??
0x7CC8E1: mov     ecx, [esi]
0x7CC8E3: mov     edx, [ecx]
0x7CC8E5: mov     eax, [edx+38h]
0x7CC8E8: push    offset aWorldviewtrans
0x7CC8ED: call    eax
0x7CC8EF: push    eax; a2
0x7CC8F0: mov     ecx, offset dword_B4506C; this
0x7CC8F5: call    NiSmartPointer_Set??
0x7CC8FA: mov     ecx, [esi]
0x7CC8FC: mov     edx, [ecx]
0x7CC8FE: mov     eax, [edx+38h]
0x7CC901: push    offset aSkinworldviewt
0x7CC906: call    eax
0x7CC908: push    eax; a2
0x7CC909: mov     ecx, offset dword_B45070; this
0x7CC90E: call    NiSmartPointer_Set??
0x7CC913: mov     ecx, [esi]
0x7CC915: mov     edx, [ecx]
0x7CC917: mov     eax, [edx+38h]
0x7CC91A: push    offset aTime
0x7CC91F: call    eax
0x7CC921: push    eax; a2
0x7CC922: mov     ecx, offset dword_B45074; this
0x7CC927: call    NiSmartPointer_Set??
0x7CC92C: mov     ecx, [esi]
0x7CC92E: mov     edx, [ecx]
0x7CC930: mov     eax, [edx+38h]
0x7CC933: push    offset aBoundcenter
0x7CC938: call    eax
0x7CC93A: push    eax; a2
0x7CC93B: mov     ecx, offset dword_B4507C; this
0x7CC940: call    NiSmartPointer_Set??
0x7CC945: mov     ecx, [esi]
0x7CC947: mov     edx, [ecx]
0x7CC949: mov     eax, [edx+38h]
0x7CC94C: push    offset aLodlandflags
0x7CC951: call    eax
0x7CC953: push    eax; a2
0x7CC954: mov     ecx, offset dword_B45080; this
0x7CC959: call    NiSmartPointer_Set??
0x7CC95E: cmp     dword ptr ds:0B42F48h, 2
0x7CC965: jl      loc_7CCA37
0x7CC96B: mov     ecx, [esi]
0x7CC96D: mov     edx, [ecx]
0x7CC96F: mov     eax, [edx+18h]
0x7CC972: push    0
0x7CC974: push    offset flt_B4615C
0x7CC979: push    4
0x7CC97B: push    10h
0x7CC97D: push    offset EmptyString
0x7CC982: push    1
0x7CC984: push    1Eh
0x7CC986: push    0
0x7CC988: push    10000007h
0x7CC98D: push    offset aDecalcount
0x7CC992: call    eax
0x7CC994: mov     ecx, [esi]
0x7CC996: mov     edx, [ecx]
0x7CC998: mov     eax, [edx+38h]
0x7CC99B: push    offset aDecalcount
0x7CC9A0: call    eax
0x7CC9A2: push    eax; a2
0x7CC9A3: mov     ecx, offset dword_B45060; this
0x7CC9A8: call    NiSmartPointer_Set??
0x7CC9AD: mov     ecx, [esi]
0x7CC9AF: mov     edx, [ecx]
0x7CC9B1: mov     eax, [edx+18h]
0x7CC9B4: push    0
0x7CC9B6: push    offset flt_B46218
0x7CC9BB: push    4
0x7CC9BD: push    80h ; '€'
0x7CC9C2: push    offset EmptyString
0x7CC9C7: push    8
0x7CC9C9: push    1Fh
0x7CC9CB: push    0
0x7CC9CD: push    10000009h
0x7CC9D2: push    offset aDecalFade
0x7CC9D7: call    eax
0x7CC9D9: mov     ecx, [esi]
0x7CC9DB: mov     edx, [ecx]
0x7CC9DD: mov     eax, [edx+38h]
0x7CC9E0: push    offset aDecalFade
0x7CC9E5: call    eax
0x7CC9E7: push    eax; a2
0x7CC9E8: mov     ecx, offset dword_B45084; this
0x7CC9ED: call    NiSmartPointer_Set??
0x7CC9F2: mov     ecx, [esi]
0x7CC9F4: mov     edx, [ecx]
0x7CC9F6: mov     eax, [edx+18h]
0x7CC9F9: push    0
0x7CC9FB: push    offset unk_B46298
0x7CCA00: push    4
0x7CCA02: push    200h
0x7CCA07: push    offset EmptyString
0x7CCA0C: push    20h ; ' '
0x7CCA0E: push    28h ; '('
0x7CCA10: push    0
0x7CCA12: push    10000009h
0x7CCA17: push    offset aDecalProj
0x7CCA1C: call    eax
0x7CCA1E: mov     ecx, [esi]
0x7CCA20: mov     edx, [ecx]
0x7CCA22: mov     eax, [edx+38h]
0x7CCA25: push    offset aDecalProj
0x7CCA2A: call    eax
0x7CCA2C: push    eax; a2
0x7CCA2D: mov     ecx, offset dword_B44F8C; this
0x7CCA32: call    NiSmartPointer_Set??
0x7CCA37: push    esi
0x7CCA38: lea     ecx, [ebx+98h]
0x7CCA3E: call    sub_55E2A0
0x7CCA43: cmp     dword ptr [ebx+2Ch], 0
0x7CCA47: lea     esi, [ebx+2Ch]
0x7CCA4A: jnz     loc_7CCE1C
0x7CCA50: push    34h ; '4'; Size
0x7CCA52: call    FormHeapAlloc
0x7CCA57: add     esp, 4
0x7CCA5A: mov     [esp+28h+var_10], eax
0x7CCA5E: test    eax, eax
0x7CCA60: mov     [esp+28h+var_4], 1
0x7CCA68: jz      short loc_7CCA77
0x7CCA6A: mov     ecx, [ebx+14h]
0x7CCA6D: push    ecx
0x7CCA6E: mov     ecx, eax
0x7CCA70: call    NiD3DShaderCostantMapPixel__Construct
0x7CCA75: jmp     short loc_7CCA79
0x7CCA77: xor     eax, eax
0x7CCA79: push    eax; a2
0x7CCA7A: mov     ecx, esi; this
0x7CCA7C: mov     [esp+2Ch+var_4], ebp
0x7CCA80: call    NiSmartPointer_Set??
0x7CCA85: mov     ecx, [esi]
0x7CCA87: mov     edx, [ecx]
0x7CCA89: mov     eax, [edx+18h]
0x7CCA8C: push    0
0x7CCA8E: push    offset flt_B44F18
0x7CCA93: push    4
0x7CCA95: push    10h
0x7CCA97: push    offset EmptyString
0x7CCA9C: push    1
0x7CCA9E: push    0
0x7CCAA0: push    0
0x7CCAA2: push    10000007h
0x7CCAA7: push    offset aEyeDir
0x7CCAAC: call    eax
0x7CCAAE: mov     ecx, [esi]
0x7CCAB0: mov     edx, [ecx]
0x7CCAB2: mov     eax, [edx+18h]
0x7CCAB5: push    0
0x7CCAB7: push    offset dword_B46498
0x7CCABC: push    4
0x7CCABE: push    10h
0x7CCAC0: push    offset EmptyString
0x7CCAC5: push    1
0x7CCAC7: push    1
0x7CCAC9: push    0
0x7CCACB: push    10000007h
0x7CCAD0: push    offset aAmbientColor
0x7CCAD5: call    eax
0x7CCAD7: mov     ecx, [esi]
0x7CCAD9: mov     edx, [ecx]
0x7CCADB: mov     eax, [edx+18h]
0x7CCADE: push    0
0x7CCAE0: push    offset dword_B464A8
0x7CCAE5: push    4
0x7CCAE7: push    10h
0x7CCAE9: push    offset EmptyString
0x7CCAEE: push    1
0x7CCAF0: push    2
0x7CCAF2: push    0
0x7CCAF4: push    10000007h
0x7CCAF9: push    offset aLightColor0
0x7CCAFE: call    eax
0x7CCB00: mov     ecx, [esi]
0x7CCB02: mov     edx, [ecx]
0x7CCB04: mov     eax, [edx+18h]
0x7CCB07: push    0
0x7CCB09: push    offset unk_B464B8
0x7CCB0E: push    4
0x7CCB10: push    10h
0x7CCB12: push    offset EmptyString
0x7CCB17: push    1
0x7CCB19: push    3
0x7CCB1B: push    0
0x7CCB1D: push    10000007h
0x7CCB22: push    offset aLightColor1
0x7CCB27: call    eax
0x7CCB29: mov     ecx, [esi]
0x7CCB2B: mov     edx, [ecx]
0x7CCB2D: mov     eax, [edx+18h]
0x7CCB30: push    0
0x7CCB32: push    offset unk_B464C8
0x7CCB37: push    4
0x7CCB39: push    10h
0x7CCB3B: push    offset EmptyString
0x7CCB40: push    1
0x7CCB42: push    4
0x7CCB44: push    0
0x7CCB46: push    10000007h
0x7CCB4B: push    offset aLightColor2
0x7CCB50: call    eax
0x7CCB52: mov     ecx, [esi]
0x7CCB54: mov     edx, [ecx]
0x7CCB56: push    0
0x7CCB58: push    offset unk_B464D8
0x7CCB5D: push    4
0x7CCB5F: push    10h
0x7CCB61: push    offset EmptyString
0x7CCB66: mov     eax, [edx+18h]
0x7CCB69: push    1
0x7CCB6B: push    5
0x7CCB6D: push    0
0x7CCB6F: push    10000007h
0x7CCB74: push    offset aLightColor3
0x7CCB79: call    eax
0x7CCB7B: mov     ecx, [esi]
0x7CCB7D: mov     edx, [ecx]
0x7CCB7F: mov     eax, [edx+18h]
0x7CCB82: push    0
0x7CCB84: push    offset dword_B46628
0x7CCB89: push    4
0x7CCB8B: push    10h
0x7CCB8D: push    offset EmptyString
0x7CCB92: push    1
0x7CCB94: push    6
0x7CCB96: push    0
0x7CCB98: push    10000007h
0x7CCB9D: push    offset aEmittanceColor
0x7CCBA2: call    eax
0x7CCBA4: mov     ecx, [esi]
0x7CCBA6: mov     edx, [ecx]
0x7CCBA8: mov     eax, [edx+18h]
0x7CCBAB: push    0
0x7CCBAD: push    offset flt_B46688
0x7CCBB2: push    4
0x7CCBB4: push    10h
0x7CCBB6: push    offset EmptyString
0x7CCBBB: push    1
0x7CCBBD: push    7
0x7CCBBF: push    0
0x7CCBC1: push    10000007h
0x7CCBC6: push    offset aToggles
0x7CCBCB: call    eax
0x7CCBCD: mov     ecx, [esi]
0x7CCBCF: mov     edx, [ecx]
0x7CCBD1: mov     eax, [edx+18h]
0x7CCBD4: push    0
0x7CCBD6: push    offset dword_B4616C
0x7CCBDB: push    4
0x7CCBDD: push    10h
0x7CCBDF: push    offset EmptyString
0x7CCBE4: push    1
0x7CCBE6: push    18h
0x7CCBE8: push    0
0x7CCBEA: push    10000007h
0x7CCBEF: push    offset aHairtint
0x7CCBF4: call    eax
0x7CCBF6: mov     ecx, [esi]
0x7CCBF8: mov     edx, [ecx]
0x7CCBFA: mov     eax, [edx+18h]
0x7CCBFD: push    0
0x7CCBFF: push    offset unk_B466A8
0x7CCC04: push    4
0x7CCC06: push    10h
0x7CCC08: push    offset EmptyString
0x7CCC0D: push    1
0x7CCC0F: push    1Ah
0x7CCC11: push    0
0x7CCC13: push    10000007h
0x7CCC18: push    offset aStbbcolorconst
0x7CCC1D: call    eax
0x7CCC1F: mov     ecx, [esi]
0x7CCC21: mov     edx, [ecx]
0x7CCC23: mov     eax, [edx+18h]
0x7CCC26: push    0
0x7CCC28: push    offset flt_B44EDC
0x7CCC2D: push    4
0x7CCC2F: push    4
0x7CCC31: push    offset EmptyString
0x7CCC36: push    1
0x7CCC38: push    19h
0x7CCC3A: push    0
0x7CCC3C: push    10000004h
0x7CCC41: push    offset aRefractionpowe
0x7CCC46: call    eax
0x7CCC48: mov     ecx, [esi]
0x7CCC4A: mov     edx, [ecx]
0x7CCC4C: mov     eax, [edx+38h]
0x7CCC4F: push    offset aHairtint
0x7CCC54: call    eax
0x7CCC56: push    eax; a2
0x7CCC57: mov     ecx, offset dword_B45554; this
0x7CCC5C: call    NiSmartPointer_Set??
0x7CCC61: mov     ecx, [esi]
0x7CCC63: mov     edx, [ecx]
0x7CCC65: mov     eax, [edx+38h]
0x7CCC68: push    offset aEyeDir
0x7CCC6D: call    eax
0x7CCC6F: mov     edi, eax
0x7CCC71: mov     eax, ds:0B45518h
0x7CCC76: cmp     eax, edi
0x7CCC78: jz      short loc_7CCCB4
0x7CCC7A: test    eax, eax
0x7CCC7C: jz      short loc_7CCCA0
0x7CCC7E: mov     ebx, eax
0x7CCC80: add     eax, 4
0x7CCC83: push    eax; lpAddend
0x7CCC84: call    dword ptr ds:0A2807Ch
0x7CCC8A: test    eax, eax
0x7CCC8C: jnz     short loc_7CCC9C
0x7CCC8E: test    ebx, ebx
0x7CCC90: jz      short loc_7CCC9C
0x7CCC92: mov     edx, [ebx]
0x7CCC94: mov     eax, [edx]
0x7CCC96: push    1
0x7CCC98: mov     ecx, ebx
0x7CCC9A: call    eax
0x7CCC9C: mov     ebx, [esp+28h+var_14]
0x7CCCA0: test    edi, edi
0x7CCCA2: mov     ds:0B45518h, edi
0x7CCCA8: jz      short loc_7CCCB4
0x7CCCAA: add     edi, 4
0x7CCCAD: push    edi; lpAddend
0x7CCCAE: call    dword ptr ds:0A28078h
0x7CCCB4: mov     ecx, [esi]
0x7CCCB6: mov     edx, [ecx]
0x7CCCB8: mov     eax, [edx+38h]
0x7CCCBB: push    offset aAmbientColor
0x7CCCC0: call    eax
0x7CCCC2: push    eax; a2
0x7CCCC3: mov     ecx, offset dword_B4551C; this
0x7CCCC8: call    NiSmartPointer_Set??
0x7CCCCD: mov     ecx, [esi]
0x7CCCCF: mov     edx, [ecx]
0x7CCCD1: mov     eax, [edx+38h]
0x7CCCD4: push    offset aLightColor0
0x7CCCD9: call    eax
0x7CCCDB: push    eax; a2
0x7CCCDC: mov     ecx, offset dword_B45520; this
0x7CCCE1: call    NiSmartPointer_Set??
0x7CCCE6: mov     ecx, [esi]
0x7CCCE8: mov     edx, [ecx]
0x7CCCEA: mov     eax, [edx+38h]
0x7CCCED: push    offset aLightColor1
0x7CCCF2: call    eax
0x7CCCF4: push    eax; a2
0x7CCCF5: mov     ecx, offset dword_B45524; this
0x7CCCFA: call    NiSmartPointer_Set??
0x7CCCFF: mov     ecx, [esi]
0x7CCD01: mov     edx, [ecx]
0x7CCD03: mov     eax, [edx+38h]
0x7CCD06: push    offset aLightColor2
0x7CCD0B: call    eax
0x7CCD0D: push    eax; a2
0x7CCD0E: mov     ecx, offset dword_B45528; this
0x7CCD13: call    NiSmartPointer_Set??
0x7CCD18: mov     ecx, [esi]
0x7CCD1A: mov     edx, [ecx]
0x7CCD1C: mov     eax, [edx+38h]
0x7CCD1F: push    offset aLightColor3
0x7CCD24: call    eax
0x7CCD26: push    eax; a2
0x7CCD27: mov     ecx, offset dword_B4552C; this
0x7CCD2C: call    NiSmartPointer_Set??
0x7CCD31: mov     ecx, [esi]
0x7CCD33: mov     edx, [ecx]
0x7CCD35: mov     eax, [edx+38h]
0x7CCD38: push    offset aEmittanceColor
0x7CCD3D: call    eax
0x7CCD3F: push    eax; a2
0x7CCD40: mov     ecx, offset dword_B45530; this
0x7CCD45: call    NiSmartPointer_Set??
0x7CCD4A: mov     ecx, [esi]
0x7CCD4C: mov     edx, [ecx]
0x7CCD4E: mov     eax, [edx+38h]
0x7CCD51: push    offset aToggles
0x7CCD56: call    eax
0x7CCD58: push    eax; a2
0x7CCD59: mov     ecx, offset dword_B45534; this
0x7CCD5E: call    NiSmartPointer_Set??
0x7CCD63: mov     ecx, [esi]
0x7CCD65: mov     edx, [ecx]
0x7CCD67: mov     eax, [edx+38h]
0x7CCD6A: push    offset aRefractionpowe
0x7CCD6F: call    eax
0x7CCD71: push    eax; a2
0x7CCD72: mov     ecx, offset dword_B45558; this
0x7CCD77: call    NiSmartPointer_Set??
0x7CCD7C: cmp     dword ptr ds:0B42F48h, 2
0x7CCD83: jl      loc_7CCE10
0x7CCD89: mov     ecx, [esi]
0x7CCD8B: mov     edx, [ecx]
0x7CCD8D: mov     eax, [edx+18h]
0x7CCD90: push    0
0x7CCD92: push    offset flt_B4615C
0x7CCD97: push    4
0x7CCD99: push    10h
0x7CCD9B: push    offset EmptyString
0x7CCDA0: push    1
0x7CCDA2: push    0Eh
0x7CCDA4: push    0
0x7CCDA6: push    10000007h
0x7CCDAB: push    offset aDecalcount
0x7CCDB0: call    eax
0x7CCDB2: mov     ecx, [esi]
0x7CCDB4: mov     edx, [ecx]
0x7CCDB6: mov     eax, [edx+38h]
0x7CCDB9: push    offset aDecalcount
0x7CCDBE: call    eax
0x7CCDC0: push    eax; a2
0x7CCDC1: mov     ecx, offset dword_B45550; this
0x7CCDC6: call    NiSmartPointer_Set??
0x7CCDCB: mov     ecx, [esi]
0x7CCDCD: mov     edx, [ecx]
0x7CCDCF: mov     eax, [edx+18h]
0x7CCDD2: push    0
0x7CCDD4: push    offset dword_B46198
0x7CCDD9: push    4
0x7CCDDB: push    80h ; '€'
0x7CCDE0: push    offset EmptyString
0x7CCDE5: push    8
0x7CCDE7: push    0Fh
0x7CCDE9: push    0
0x7CCDEB: push    10000009h
0x7CCDF0: push    offset aDecalOffset
0x7CCDF5: call    eax
0x7CCDF7: mov     ecx, [esi]
0x7CCDF9: mov     edx, [ecx]
0x7CCDFB: mov     eax, [edx+38h]
0x7CCDFE: push    offset aDecalOffset
0x7CCE03: call    eax
0x7CCE05: push    eax; a2
0x7CCE06: mov     ecx, offset dword_B44F88; this
0x7CCE0B: call    NiSmartPointer_Set??
0x7CCE10: push    esi
0x7CCE11: lea     ecx, [ebx+94h]
0x7CCE17: call    sub_55E2A0
0x7CCE1C: cmp     dword ptr [ebx+90h], 0
0x7CCE23: lea     esi, [ebx+90h]
0x7CCE29: jnz     loc_7CCFB4
0x7CCE2F: push    34h ; '4'; Size
0x7CCE31: call    FormHeapAlloc
0x7CCE36: add     esp, 4
0x7CCE39: mov     [esp+28h+var_10], eax
0x7CCE3D: test    eax, eax
0x7CCE3F: mov     [esp+28h+var_4], 2
0x7CCE47: jz      short loc_7CCE56
0x7CCE49: mov     ecx, [ebx+14h]
0x7CCE4C: push    ecx
0x7CCE4D: mov     ecx, eax
0x7CCE4F: call    NiD3DShaderCostantMapVertex__Construct
0x7CCE54: jmp     short loc_7CCE58
0x7CCE56: xor     eax, eax
0x7CCE58: push    eax; a2
0x7CCE59: mov     ecx, esi; this
0x7CCE5B: mov     [esp+2Ch+var_4], ebp
0x7CCE5F: call    NiSmartPointer_Set??
0x7CCE64: mov     ecx, [esi]
0x7CCE66: mov     edx, [ecx]
0x7CCE68: mov     eax, [edx+1Ch]
0x7CCE6B: push    offset EmptyString
0x7CCE70: push    0
0x7CCE72: push    20000009h
0x7CCE77: push    offset aWorldviewprojt
0x7CCE7C: call    eax
0x7CCE7E: mov     ecx, [esi]
0x7CCE80: mov     edx, [ecx]
0x7CCE82: mov     eax, [edx+1Ch]
0x7CCE85: push    offset EmptyString
0x7CCE8A: push    4
0x7CCE8C: push    20000009h
0x7CCE91: push    offset aSkinworldviewp
0x7CCE96: call    eax
0x7CCE98: mov     ecx, [esi]
0x7CCE9A: mov     edx, [ecx]
0x7CCE9C: mov     eax, [edx+18h]
0x7CCE9F: push    0
0x7CCEA1: push    0
0x7CCEA3: push    0
0x7CCEA5: push    0
0x7CCEA7: push    0
0x7CCEA9: push    36h ; '6'
0x7CCEAB: push    0Eh
0x7CCEAD: push    120000h
0x7CCEB2: push    20000009h
0x7CCEB7: push    offset aBonematrix3
0x7CCEBC: call    eax
0x7CCEBE: mov     ecx, [esi]
0x7CCEC0: mov     edx, [ecx]
0x7CCEC2: mov     eax, [edx+18h]
0x7CCEC5: push    0
0x7CCEC7: push    offset flt_B44F08
0x7CCECC: push    4
0x7CCECE: push    10h
0x7CCED0: push    offset EmptyString
0x7CCED5: push    1
0x7CCED7: push    8
0x7CCED9: push    0
0x7CCEDB: push    10000007h
0x7CCEE0: push    offset aEyeposition
0x7CCEE5: call    eax
0x7CCEE7: mov     ecx, [esi]
0x7CCEE9: mov     edx, [ecx]
0x7CCEEB: mov     eax, [edx+18h]
0x7CCEEE: push    0
0x7CCEF0: push    offset flt_B44ED0
0x7CCEF5: push    4
0x7CCEF7: push    4
0x7CCEF9: push    offset EmptyString
0x7CCEFE: push    1
0x7CCF00: push    9
0x7CCF02: push    0
0x7CCF04: push    10000004h
0x7CCF09: push    offset aUOffset
0x7CCF0E: call    eax
0x7CCF10: mov     ecx, [esi]
0x7CCF12: mov     edx, [ecx]
0x7CCF14: mov     eax, [edx+18h]
0x7CCF17: push    0
0x7CCF19: push    offset flt_B44ED4
0x7CCF1E: push    4
0x7CCF20: push    4
0x7CCF22: push    offset EmptyString
0x7CCF27: push    1
0x7CCF29: push    0Ah
0x7CCF2B: push    0
0x7CCF2D: push    10000004h
0x7CCF32: push    offset aVOffset
0x7CCF37: call    eax
0x7CCF39: mov     ecx, [esi]
0x7CCF3B: mov     edx, [ecx]
0x7CCF3D: push    0
0x7CCF3F: push    offset unk_B44ED8
0x7CCF44: push    4
0x7CCF46: mov     eax, [edx+18h]
0x7CCF49: push    4
0x7CCF4B: push    offset EmptyString
0x7CCF50: push    1
0x7CCF52: push    0Bh
0x7CCF54: push    0
0x7CCF56: push    10000004h
0x7CCF5B: push    offset aZScaler
0x7CCF60: call    eax
0x7CCF62: mov     ecx, [esi]
0x7CCF64: mov     edx, [ecx]
0x7CCF66: mov     eax, [edx+18h]
0x7CCF69: push    0
0x7CCF6B: push    offset dword_B44F78
0x7CCF70: push    4
0x7CCF72: push    10h
0x7CCF74: push    offset EmptyString
0x7CCF79: push    1
0x7CCF7B: push    0Ch
0x7CCF7D: push    0
0x7CCF7F: push    10000007h
0x7CCF84: push    offset aFogparam
0x7CCF89: call    eax
0x7CCF8B: mov     ecx, [esi]
0x7CCF8D: mov     edx, [ecx]
0x7CCF8F: mov     eax, [edx+18h]
0x7CCF92: push    0
0x7CCF94: push    offset dword_B44F68
0x7CCF99: push    4
0x7CCF9B: push    10h
0x7CCF9D: push    offset EmptyString
0x7CCFA2: push    1
0x7CCFA4: push    0Dh
0x7CCFA6: push    0
0x7CCFA8: push    10000007h
0x7CCFAD: push    offset aFogcolor
0x7CCFB2: call    eax
0x7CCFB4: cmp     dword ptr [ebx+8Ch], 0
0x7CCFBB: lea     esi, [ebx+8Ch]
0x7CCFC1: jnz     loc_7CD077
0x7CCFC7: push    34h ; '4'; Size
0x7CCFC9: call    FormHeapAlloc
0x7CCFCE: add     esp, 4
0x7CCFD1: mov     [esp+28h+var_10], eax
0x7CCFD5: test    eax, eax
0x7CCFD7: mov     [esp+28h+var_4], 3
0x7CCFDF: jz      short loc_7CCFEE
0x7CCFE1: mov     ecx, [ebx+14h]
0x7CCFE4: push    ecx
0x7CCFE5: mov     ecx, eax
0x7CCFE7: call    NiD3DShaderCostantMapPixel__Construct
0x7CCFEC: jmp     short loc_7CCFF0
0x7CCFEE: xor     eax, eax
0x7CCFF0: push    eax; a2
0x7CCFF1: mov     ecx, esi; this
0x7CCFF3: mov     [esp+2Ch+var_4], ebp
0x7CCFF7: call    NiSmartPointer_Set??
0x7CCFFC: mov     ecx, [esi]
0x7CCFFE: mov     edx, [ecx]
0x7CD000: mov     eax, [edx+18h]
0x7CD003: push    0
0x7CD005: push    offset dword_B44F38
0x7CD00A: push    4
0x7CD00C: push    10h
0x7CD00E: push    offset EmptyString
0x7CD013: push    1
0x7CD015: push    0
0x7CD017: push    0
0x7CD019: push    10000007h
0x7CD01E: push    offset aFillColor
0x7CD023: call    eax
0x7CD025: mov     ecx, [esi]
0x7CD027: mov     edx, [ecx]
0x7CD029: mov     eax, [edx+18h]
0x7CD02C: push    0
0x7CD02E: push    offset dword_B44F48
0x7CD033: push    4
0x7CD035: push    10h
0x7CD037: push    offset EmptyString
0x7CD03C: push    1
0x7CD03E: push    1
0x7CD040: push    0
0x7CD042: push    10000007h
0x7CD047: push    offset aRimColor
0x7CD04C: call    eax
0x7CD04E: mov     ecx, [esi]
0x7CD050: mov     edx, [ecx]
0x7CD052: mov     eax, [edx+18h]
0x7CD055: push    0
0x7CD057: push    offset flt_B44F58
0x7CD05C: push    4
0x7CD05E: push    10h
0x7CD060: push    offset EmptyString
0x7CD065: push    1
0x7CD067: push    2
0x7CD069: push    0
0x7CD06B: push    10000007h
0x7CD070: push    offset aFvars
0x7CD075: call    eax
0x7CD077: mov     ecx, dword ptr [esp+28h+var_C]
0x7CD07B: mov     large fs:0, ecx
0x7CD082: pop     ecx
0x7CD083: pop     edi
0x7CD084: pop     esi
0x7CD085: pop     ebp
0x7CD086: pop     ebx
0x7CD087: add     esp, 14h
0x7CD08A: retn
