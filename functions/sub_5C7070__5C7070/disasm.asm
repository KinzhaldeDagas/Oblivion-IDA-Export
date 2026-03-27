0x5C7070: push    0FFFFFFFFh
0x5C7072: push    offset SEH_5C7070
0x5C7077: mov     eax, large fs:0
0x5C707D: push    eax
0x5C707E: sub     esp, 200h
0x5C7084: push    ebx
0x5C7085: push    ebp
0x5C7086: push    esi
0x5C7087: push    edi
0x5C7088: mov     eax, ds:0B30AACh
0x5C708D: xor     eax, esp
0x5C708F: push    eax
0x5C7090: lea     eax, [esp+220h+var_C]
0x5C7097: mov     large fs:0, eax
0x5C709D: push    40Ch
0x5C70A2: call    Menu_GetOpenMenuTile
0x5C70A7: add     esp, 4
0x5C70AA: test    eax, eax
0x5C70AC: jz      loc_5C77D9
0x5C70B2: mov     ecx, eax
0x5C70B4: call    Tile_GetParentMenu
0x5C70B9: mov     edi, eax
0x5C70BB: test    edi, edi
0x5C70BD: jz      loc_5C77D9
0x5C70C3: mov     ecx, ds:0B333C4h
0x5C70C9: mov     eax, [ecx]
0x5C70CB: mov     edx, [eax+130h]
0x5C70D1: push    0
0x5C70D3: call    edx
0x5C70D5: test    eax, eax
0x5C70D7: jz      loc_5C77D9
0x5C70DD: mov     ecx, ds:0B333C4h
0x5C70E3: mov     eax, [ecx]
0x5C70E5: mov     edx, [eax+134h]
0x5C70EB: push    0
0x5C70ED: call    edx
0x5C70EF: test    eax, eax
0x5C70F1: jz      loc_5C77D9
0x5C70F7: mov     ecx, ds:0B333C4h
0x5C70FD: mov     eax, [ecx]
0x5C70FF: mov     edx, [eax+170h]
0x5C7105: call    edx
0x5C7107: mov     ebx, eax
0x5C7109: mov     eax, ds:0B333C4h
0x5C710E: mov     ecx, [eax+58h]
0x5C7111: mov     edx, [ecx]
0x5C7113: mov     eax, [edx+5Ch]
0x5C7116: call    eax
0x5C7118: push    offset sub_43ACE0; a5
0x5C711D: push    offset sub_43EB30; a4
0x5C7122: push    4; size
0x5C7124: push    18h; a2
0x5C7126: lea     ecx, [esp+230h+a1]
0x5C712A: push    ecx; a1
0x5C712B: call    ArrayConstructor
0x5C7130: push    offset sub_43ACE0; a5
0x5C7135: push    offset sub_43EB30; a4
0x5C713A: push    4; size
0x5C713C: push    18h; a2
0x5C713E: lea     edx, [esp+230h+var_190]
0x5C7145: push    edx; a1
0x5C7146: mov     [esp+234h+var_4], 0
0x5C7151: call    ArrayConstructor
0x5C7156: fldz
0x5C7158: mov     esi, [ebx+0E8h]
0x5C715E: push    ecx
0x5C715F: fstp    [esp+224h+var_224]; float
0x5C7162: push    0; char
0x5C7164: lea     eax, [esp+228h+a1]
0x5C7168: push    eax; int
0x5C7169: mov     ecx, ebx
0x5C716B: mov     byte ptr [esp+22Ch+var_4], 1
0x5C7173: call    sub_521A10
0x5C7178: push    eax; int
0x5C7179: add     esi, 29Ch
0x5C717F: push    esi; int
0x5C7180: call    sub_552990
0x5C7185: push    0
0x5C7187: lea     ecx, [esp+238h+a1]
0x5C718B: push    0
0x5C718D: push    ecx
0x5C718E: call    BSFaceGen_GetAge
0x5C7193: fstp    dword ptr [esp+240h+var_208+4]
0x5C7197: push    1
0x5C7199: lea     edx, [esp+244h+a1]
0x5C719D: push    0
0x5C719F: push    edx
0x5C71A0: call    BSFaceGen_GetAge
0x5C71A5: fstp    [esp+24Ch+var_20C]
0x5C71A9: fld     dword ptr [edi+880h]
0x5C71AF: add     esp, 2Ch
0x5C71B2: fstp    dword ptr [esp+220h+var_208]
0x5C71B6: fld1
0x5C71B8: fldz
0x5C71BA: fsub    st(1), st
0x5C71BC: fxch    st(1)
0x5C71BE: fst     [esp+220h+var_1F8]
0x5C71C2: fld     dword ptr [esp+220h+var_208]
0x5C71C6: fsubrp  st(2), st
0x5C71C8: fdivp   st(1), st
0x5C71CA: fmul    qword ptr ds:0A3F3D0h
0x5C71D0: fld     qword ptr ds:0A492F0h
0x5C71D6: fadd    st(1), st
0x5C71D8: fxch    st(1)
0x5C71DA: fstp    dword ptr [esp+220h+var_208]
0x5C71DE: fld     dword ptr [esp+220h+var_208+4]
0x5C71E2: fld     dword ptr [esp+220h+var_208]
0x5C71E6: fld     st
0x5C71E8: fsubp   st(2), st
0x5C71EA: fxch    st(1)
0x5C71EC: fsubr   [esp+220h+var_20C]
0x5C71F0: fstp    [esp+220h+var_20C]
0x5C71F4: fcom    st(1)
0x5C71F6: fnstsw  ax
0x5C71F8: fld     dword ptr ds:0A468FCh
0x5C71FE: fld     dword ptr ds:0A47800h
0x5C7204: test    ah, 41h
0x5C7207: jnz     short loc_5C7212
0x5C7209: fcom    st(2)
0x5C720B: fnstsw  ax
0x5C720D: test    ah, 41h
0x5C7210: jnz     short loc_5C7258
0x5C7212: fxch    st(2)
0x5C7214: fcom    st(3)
0x5C7216: fnstsw  ax
0x5C7218: test    ah, 41h
0x5C721B: jz      short loc_5C7227
0x5C721D: fstp    st
0x5C721F: fst     dword ptr [esp+220h+var_208]
0x5C7223: fld     dword ptr [esp+220h+var_208]
0x5C7227: fxch    st(1)
0x5C7229: fxch    st(2)
0x5C722B: fxch    st(1)
0x5C722D: fld     [esp+220h+var_20C]
0x5C7231: fcom    st(4)
0x5C7233: fnstsw  ax
0x5C7235: test    ah, 41h
0x5C7238: jnz     short loc_5C7243
0x5C723A: fcom    st(2)
0x5C723C: fnstsw  ax
0x5C723E: test    ah, 5
0x5C7241: jp      short loc_5C7266
0x5C7243: fstp    st(2)
0x5C7245: fxch    st(1)
0x5C7247: fcomp   st(3)
0x5C7249: fnstsw  ax
0x5C724B: fstp    st(2)
0x5C724D: test    ah, 41h
0x5C7250: jz      short loc_5C7272
0x5C7252: fstp    [esp+220h+var_20C]
0x5C7256: jmp     short loc_5C7274
0x5C7258: fstp    st(2)
0x5C725A: fxch    st(1)
0x5C725C: fst     dword ptr [esp+220h+var_208]
0x5C7260: fld     dword ptr [esp+220h+var_208]
0x5C7264: jmp     short loc_5C722D
0x5C7266: fstp    st(4)
0x5C7268: fstp    st(3)
0x5C726A: fstp    st(1)
0x5C726C: fstp    [esp+220h+var_20C]
0x5C7270: jmp     short loc_5C7274
0x5C7272: fstp    st
0x5C7274: push    ecx
0x5C7275: fstp    [esp+224h+var_224]; float
0x5C7278: push    0; int
0x5C727A: lea     eax, [esp+228h+a1]
0x5C727E: push    0; int
0x5C7280: push    eax; int
0x5C7281: call    sub_555A00
0x5C7286: fld     [esp+230h+var_20C]
0x5C728A: add     esp, 0Ch
0x5C728D: fstp    [esp+224h+var_224]; float
0x5C7290: push    1; int
0x5C7292: lea     ecx, [esp+228h+a1]
0x5C7296: push    0; int
0x5C7298: push    ecx; int
0x5C7299: call    sub_555A00
0x5C729E: push    0
0x5C72A0: lea     edx, [esp+234h+a1]
0x5C72A4: push    1
0x5C72A6: push    edx
0x5C72A7: call    BSFaceGen_GetAge
0x5C72AC: fstp    [esp+23Ch+var_200]
0x5C72B0: add     esp, 1Ch
0x5C72B3: mov     ecx, ebx
0x5C72B5: call    sub_522230
0x5C72BA: fsubr   [esp+220h+var_200]
0x5C72BE: push    1
0x5C72C0: lea     eax, [esp+224h+a1]
0x5C72C4: push    1
0x5C72C6: fstp    dword ptr [esp+228h+var_208+4]
0x5C72CA: push    eax
0x5C72CB: call    BSFaceGen_GetAge
0x5C72D0: fstp    [esp+22Ch+var_200]
0x5C72D4: add     esp, 0Ch
0x5C72D7: mov     ecx, ebx
0x5C72D9: call    sub_522230
0x5C72DE: fsubr   [esp+220h+var_200]
0x5C72E2: fstp    [esp+220h+var_20C]
0x5C72E6: fld     dword ptr [edi+884h]
0x5C72EC: fstp    dword ptr [esp+220h+var_208]
0x5C72F0: fld     dword ptr [esp+220h+var_208]
0x5C72F4: fsub    qword ptr ds:0A2FC68h
0x5C72FA: fdiv    [esp+220h+var_1F8]
0x5C72FE: fmul    qword ptr ds:0A3C800h
0x5C7304: fsub    qword ptr ds:0A3D0C0h
0x5C730A: fstp    dword ptr [esp+220h+var_208]
0x5C730E: fld     dword ptr [esp+220h+var_208+4]
0x5C7312: fld     dword ptr [esp+220h+var_208]
0x5C7316: fld     st
0x5C7318: fsubp   st(2), st
0x5C731A: fxch    st(1)
0x5C731C: fsubr   [esp+220h+var_20C]
0x5C7320: fstp    [esp+220h+var_20C]
0x5C7324: fld     dword ptr ds:0A53954h
0x5C732A: fcom    st(1)
0x5C732C: fnstsw  ax
0x5C732E: fld     dword ptr ds:0A379B4h
0x5C7334: test    ah, 5
0x5C7337: jp      short loc_5C7342
0x5C7339: fcom    st(2)
0x5C733B: fnstsw  ax
0x5C733D: test    ah, 41h
0x5C7340: jnz     short loc_5C737A
0x5C7342: fxch    st(2)
0x5C7344: fcomp   st(1)
0x5C7346: fnstsw  ax
0x5C7348: test    ah, 41h
0x5C734B: jz      short loc_5C7351
0x5C734D: fst     dword ptr [esp+220h+var_208]
0x5C7351: fxch    st(1)
0x5C7353: fld     [esp+220h+var_20C]
0x5C7357: fcom    st(2)
0x5C7359: fnstsw  ax
0x5C735B: test    ah, 41h
0x5C735E: jnz     short loc_5C7369
0x5C7360: fcom    st(1)
0x5C7362: fnstsw  ax
0x5C7364: test    ah, 5
0x5C7367: jp      short loc_5C7384
0x5C7369: fstp    st(1)
0x5C736B: fcomp   st(1)
0x5C736D: fnstsw  ax
0x5C736F: test    ah, 41h
0x5C7372: jz      short loc_5C738E
0x5C7374: fstp    [esp+220h+var_20C]
0x5C7378: jmp     short loc_5C7390
0x5C737A: fstp    st(2)
0x5C737C: fxch    st(1)
0x5C737E: fst     dword ptr [esp+220h+var_208]
0x5C7382: jmp     short loc_5C7353
0x5C7384: fstp    st
0x5C7386: fstp    st(1)
0x5C7388: fstp    [esp+220h+var_20C]
0x5C738C: jmp     short loc_5C7390
0x5C738E: fstp    st
0x5C7390: mov     ecx, ebx
0x5C7392: call    sub_522230
0x5C7397: fadd    dword ptr [esp+220h+var_208]
0x5C739B: mov     ecx, ebx
0x5C739D: fstp    dword ptr [esp+220h+var_208]
0x5C73A1: call    sub_522230
0x5C73A6: fadd    [esp+220h+var_20C]
0x5C73AA: push    ecx
0x5C73AB: lea     ecx, [esp+224h+a1]
0x5C73AF: fstp    [esp+224h+var_20C]
0x5C73B3: fld     dword ptr [esp+224h+var_208]
0x5C73B7: fstp    [esp+224h+var_224]; float
0x5C73BA: push    0; int
0x5C73BC: push    1; int
0x5C73BE: push    ecx; int
0x5C73BF: call    sub_555A00
0x5C73C4: fld     [esp+230h+var_20C]
0x5C73C8: add     esp, 0Ch
0x5C73CB: fstp    [esp+224h+var_224]; float
0x5C73CE: push    1; int
0x5C73D0: lea     edx, [esp+228h+a1]
0x5C73D4: push    1; int
0x5C73D6: push    edx; int
0x5C73D7: call    sub_555A00
0x5C73DC: lea     eax, [esp+230h+var_190]
0x5C73E3: push    eax
0x5C73E4: call    sub_552880
0x5C73E9: add     esp, 14h
0x5C73EC: push    offset sub_43ACE0; a5
0x5C73F1: push    offset sub_43EB30; a4
0x5C73F6: push    4; size
0x5C73F8: push    18h; a2
0x5C73FA: lea     ecx, [esp+230h+var_130]
0x5C7401: push    ecx; a1
0x5C7402: call    ArrayConstructor
0x5C7407: lea     edx, [esp+220h+var_130]
0x5C740E: push    edx
0x5C740F: mov     ecx, ebx
0x5C7411: mov     byte ptr [esp+224h+var_4], 2
0x5C7419: call    sub_5221C0
0x5C741E: lea     eax, [esp+220h+var_190]
0x5C7425: push    eax
0x5C7426: lea     ecx, [esp+224h+a1]
0x5C742A: push    ecx
0x5C742B: lea     edx, [esp+228h+var_130]
0x5C7432: push    edx
0x5C7433: call    sub_552C10
0x5C7438: fldz
0x5C743A: add     esp, 8
0x5C743D: fstp    [esp+224h+var_224]; float
0x5C7440: push    0; char
0x5C7442: mov     ecx, ebx
0x5C7444: call    sub_521A10
0x5C7449: push    eax; int
0x5C744A: mov     ecx, ebx
0x5C744C: call    sub_521A10
0x5C7451: push    eax; int
0x5C7452: lea     eax, [esp+230h+var_190]
0x5C7459: push    eax; int
0x5C745A: call    sub_552990
0x5C745F: mov     ecx, ds:0B333C4h
0x5C7465: mov     edx, [ecx]
0x5C7467: mov     eax, [edx+130h]
0x5C746D: add     esp, 14h
0x5C7470: push    0
0x5C7472: call    eax
0x5C7474: mov     [esp+220h+var_20C], eax
0x5C7478: mov     dword ptr [esp+220h+var_208], 2
0x5C7480: mov     eax, [esp+220h+var_20C]
0x5C7484: movzx   ecx, word ptr [eax+0B6h]
0x5C748B: xor     esi, esi
0x5C748D: test    ecx, ecx
0x5C748F: mov     dword ptr [esp+220h+var_200], ecx
0x5C7493: mov     dword ptr [esp+220h+var_208+4], esi
0x5C7497: jbe     loc_5C7583
0x5C749D: jmp     short loc_5C74A4
0x5C749F: align 10h
0x5C74A0: mov     eax, [esp+220h+var_20C]
0x5C74A4: movzx   ecx, word ptr [eax+0B6h]
0x5C74AB: cmp     ecx, esi
0x5C74AD: jbe     loc_5C7572
0x5C74B3: mov     edx, [eax+0B0h]
0x5C74B9: mov     ecx, [edx+esi*4]
0x5C74BC: test    ecx, ecx
0x5C74BE: jz      loc_5C7572
0x5C74C4: mov     eax, [ecx]
0x5C74C6: mov     edx, [eax+10h]
0x5C74C9: call    edx
0x5C74CB: mov     ebp, eax
0x5C74CD: test    ebp, ebp
0x5C74CF: jz      loc_5C7572
0x5C74D5: mov     esi, [ebp+8]
0x5C74D8: mov     edi, offset aFacegenhair; "FaceGenHair"
0x5C74DD: mov     ecx, 0Ch
0x5C74E2: xor     eax, eax
0x5C74E4: repe cmpsb
0x5C74E6: jnz     short loc_5C7503
0x5C74E8: fld     dword ptr [ebx+1CCh]
0x5C74EE: push    ecx
0x5C74EF: fstp    dword ptr [esp+224h+var_1F8]
0x5C74F3: fld     dword ptr [esp+224h+var_1F8]
0x5C74F7: fstp    [esp+224h+var_224]; float
0x5C74FA: push    ebp; int
0x5C74FB: call    sub_550980
0x5C7500: add     esp, 8
0x5C7503: push    ebp
0x5C7504: call    sub_550790
0x5C7509: mov     esi, eax
0x5C750B: add     esp, 4
0x5C750E: test    esi, esi
0x5C7510: jz      short loc_5C756E
0x5C7512: mov     edx, [esi]
0x5C7514: mov     eax, [edx+54h]
0x5C7517: mov     ecx, esi
0x5C7519: call    eax
0x5C751B: test    eax, eax
0x5C751D: jz      short loc_5C756E
0x5C751F: fld1
0x5C7521: mov     edx, [esi]
0x5C7523: mov     eax, [edx+54h]
0x5C7526: push    0; int
0x5C7528: push    ecx
0x5C7529: fstp    [esp+228h+var_228]; float
0x5C752C: push    ebp; int
0x5C752D: lea     ecx, [esp+22Ch+var_190]
0x5C7534: push    ecx; int
0x5C7535: mov     ecx, esi
0x5C7537: call    eax
0x5C7539: mov     ecx, eax
0x5C753B: call    sub_558840
0x5C7540: mov     esi, [ebp+8]
0x5C7543: mov     edi, offset aFacegenhair; "FaceGenHair"
0x5C7548: mov     ecx, 0Ch
0x5C754D: xor     edx, edx
0x5C754F: repe cmpsb
0x5C7551: jnz     short loc_5C756E
0x5C7553: fld     dword ptr [ebx+1CCh]
0x5C7559: push    ecx
0x5C755A: fstp    dword ptr [esp+224h+var_1F8]
0x5C755E: fld     dword ptr [esp+224h+var_1F8]
0x5C7562: fstp    [esp+224h+var_224]; float
0x5C7565: push    ebp; int
0x5C7566: call    sub_550980
0x5C756B: add     esp, 8
0x5C756E: mov     esi, dword ptr [esp+220h+var_208+4]
0x5C7572: add     esi, 1
0x5C7575: cmp     esi, dword ptr [esp+220h+var_200]
0x5C7579: mov     dword ptr [esp+220h+var_208+4], esi
0x5C757D: jb      loc_5C74A0
0x5C7583: mov     ecx, ds:0B333C4h
0x5C7589: mov     eax, [ecx]
0x5C758B: mov     edx, [eax+134h]
0x5C7591: push    0
0x5C7593: call    edx
0x5C7595: sub     dword ptr [esp+220h+var_208], 1
0x5C759A: mov     [esp+220h+var_20C], eax
0x5C759E: jnz     loc_5C7480
0x5C75A4: cmp     [esp+220h+arg_0], 0
0x5C75AC: jz      loc_5C777F
0x5C75B2: mov     ecx, ds:0B333C4h
0x5C75B8: mov     eax, [ecx]
0x5C75BA: mov     edx, [eax+154h]
0x5C75C0: call    edx
0x5C75C2: test    eax, eax
0x5C75C4: jz      loc_5C76E6
0x5C75CA: mov     edx, [eax]
0x5C75CC: mov     ecx, eax
0x5C75CE: mov     eax, [edx+8]
0x5C75D1: call    eax
0x5C75D3: test    eax, eax
0x5C75D5: jz      loc_5C76E6
0x5C75DB: mov     ecx, ds:0B333C4h; this
0x5C75E1: xor     edi, edi
0x5C75E3: push    edi; a2
0x5C75E4: call    Player_GetAnimData
0x5C75E9: test    eax, eax
0x5C75EB: jz      short loc_5C7616
0x5C75ED: mov     ecx, ds:0B333C4h; this
0x5C75F3: push    edi; a2
0x5C75F4: call    Player_GetAnimData
0x5C75F9: cmp     [eax+98h], edi
0x5C75FF: jz      short loc_5C7616
0x5C7601: mov     ecx, ds:0B333C4h; this
0x5C7607: push    edi; a2
0x5C7608: call    Player_GetAnimData
0x5C760D: mov     eax, [eax+98h]
0x5C7613: mov     edi, [eax+7Ch]
0x5C7616: mov     ecx, ds:0B333C4h
0x5C761C: mov     edx, [ecx]
0x5C761E: mov     eax, [edx+134h]
0x5C7624: push    0
0x5C7626: call    eax
0x5C7628: push    eax
0x5C7629: push    0
0x5C762B: call    GetShadowSceneNode
0x5C7630: add     esp, 4
0x5C7633: mov     ecx, eax
0x5C7635: call    sub_7C5E70
0x5C763A: mov     ecx, ds:0B333C4h
0x5C7640: mov     edx, [ecx]
0x5C7642: mov     eax, [edx+130h]
0x5C7648: push    0
0x5C764A: call    eax
0x5C764C: push    eax
0x5C764D: push    0
0x5C764F: call    GetShadowSceneNode
0x5C7654: add     esp, 4
0x5C7657: mov     ecx, eax
0x5C7659: call    sub_7C5E70
0x5C765E: mov     ecx, ds:0B333C4h
0x5C7664: mov     edx, [ecx]
0x5C7666: mov     eax, [edx+134h]
0x5C766C: push    0
0x5C766E: call    eax
0x5C7670: mov     esi, eax
0x5C7672: test    esi, esi
0x5C7674: jz      short loc_5C76A2
0x5C7676: cmp     dword ptr [esi+1Ch], 0
0x5C767A: jz      short loc_5C76A2
0x5C767C: push    edi
0x5C767D: push    esi
0x5C767E: call    sub_716620
0x5C7683: mov     ecx, [esi+1Ch]
0x5C7686: mov     edx, [ecx]
0x5C7688: mov     edx, [edx+88h]
0x5C768E: add     esp, 8
0x5C7691: push    esi
0x5C7692: lea     eax, [esp+224h+var_200]
0x5C7696: push    eax
0x5C7697: call    edx
0x5C7699: lea     ecx, [esp+220h+var_200]; this
0x5C769D: call    sub_7016A0
0x5C76A2: mov     ecx, ds:0B333C4h
0x5C76A8: mov     eax, [ecx]
0x5C76AA: mov     edx, [eax+130h]
0x5C76B0: push    0
0x5C76B2: call    edx
0x5C76B4: mov     esi, eax
0x5C76B6: test    esi, esi
0x5C76B8: jz      short loc_5C76E6
0x5C76BA: cmp     dword ptr [esi+1Ch], 0
0x5C76BE: jz      short loc_5C76E6
0x5C76C0: push    edi
0x5C76C1: push    esi
0x5C76C2: call    sub_716620
0x5C76C7: mov     ecx, [esi+1Ch]
0x5C76CA: mov     eax, [ecx]
0x5C76CC: mov     eax, [eax+88h]
0x5C76D2: add     esp, 8
0x5C76D5: push    esi
0x5C76D6: lea     edx, [esp+224h+var_200]
0x5C76DA: push    edx
0x5C76DB: call    eax
0x5C76DD: lea     ecx, [esp+220h+var_200]; this
0x5C76E1: call    sub_7016A0
0x5C76E6: mov     ecx, ds:0B333C4h
0x5C76EC: mov     ecx, [ecx+58h]
0x5C76EF: mov     edx, [ecx]
0x5C76F1: mov     eax, [edx+5Ch]
0x5C76F4: call    eax
0x5C76F6: mov     ecx, ebx
0x5C76F8: call    sub_405CE0
0x5C76FD: lea     ecx, [esp+218h+var_C8]
0x5C7704: call    FaceGenHeadParameters_Ctor
0x5C7709: mov     ecx, [ebx+0E8h]
0x5C770F: lea     edx, [esp+218h+var_C8]
0x5C7716: push    edx
0x5C7717: push    ebx
0x5C7718: mov     [esp+220h+arg_0], 3
0x5C7720: call    TESRace_GetFaceGenHeadParameters
0x5C7725: mov     ecx, ds:0B333C4h
0x5C772B: mov     edx, [ecx]
0x5C772D: lea     eax, [esp+218h+var_C8]
0x5C7734: push    eax
0x5C7735: mov     eax, [edx+130h]
0x5C773B: push    0
0x5C773D: call    eax
0x5C773F: push    eax
0x5C7740: call    BSFaceGen_DoSomethingWithFaceGenNode
0x5C7745: add     esp, 8
0x5C7748: lea     ecx, [esp+21Ch+var_CC]
0x5C774F: push    ecx
0x5C7750: mov     ecx, ds:0B333C4h
0x5C7756: mov     edx, [ecx]
0x5C7758: mov     eax, [edx+134h]
0x5C775E: push    0
0x5C7760: call    eax
0x5C7762: push    eax
0x5C7763: call    BSFaceGen_DoSomethingWithFaceGenNode
0x5C7768: add     esp, 8
0x5C776B: lea     ecx, [esp+220h+var_D0]
0x5C7772: mov     byte ptr [esp+220h+var_4], 2
0x5C777A: call    FaceGenHeadParameters_Dtor
0x5C777F: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C7784: push    4; int
0x5C7786: push    18h; unsigned int
0x5C7788: lea     ecx, [esp+22Ch+var_130]
0x5C778F: push    ecx; void *
0x5C7790: mov     byte ptr [esp+230h+var_4], 1
0x5C7798: call    $LN21
0x5C779D: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C77A2: push    4; int
0x5C77A4: push    18h; unsigned int
0x5C77A6: lea     edx, [esp+22Ch+var_190]
0x5C77AD: push    edx; void *
0x5C77AE: mov     byte ptr [esp+230h+var_4], 0
0x5C77B6: call    $LN21
0x5C77BB: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5C77C0: push    4; int
0x5C77C2: push    18h; unsigned int
0x5C77C4: lea     eax, [esp+22Ch+a1]
0x5C77C8: push    eax; void *
0x5C77C9: mov     [esp+230h+var_4], 0FFFFFFFFh
0x5C77D4: call    $LN21
0x5C77D9: mov     ecx, [esp+220h+var_C]
0x5C77E0: mov     large fs:0, ecx
0x5C77E7: pop     ecx
0x5C77E8: pop     edi
0x5C77E9: pop     esi
0x5C77EA: pop     ebp
0x5C77EB: pop     ebx
0x5C77EC: add     esp, 20Ch
0x5C77F2: retn
