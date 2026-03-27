0x88B070: push    0FFFFFFFFh
0x88B072: push    offset SEH_8C62B0
0x88B077: mov     eax, large fs:0
0x88B07D: push    eax
0x88B07E: push    ecx
0x88B07F: push    esi
0x88B080: mov     eax, ds:0B30AACh
0x88B085: xor     eax, esp
0x88B087: push    eax
0x88B088: lea     eax, [esp+18h+var_C]
0x88B08C: mov     large fs:0, eax
0x88B092: cmp     byte ptr ds:0BA8040h, 0
0x88B099: setz    al
0x88B09C: test    al, al
0x88B09E: jz      loc_88B416
0x88B0A4: push    2Ch ; ','; Size
0x88B0A6: mov     dword ptr ds:0B2EB04h, offset sub_889770
0x88B0B0: mov     dword ptr ds:0B2EB08h, offset sub_6078C0
0x88B0BA: call    FormHeapAlloc
0x88B0BF: mov     esi, eax
0x88B0C1: add     esp, 4
0x88B0C4: mov     [esp+18h+var_10], esi
0x88B0C8: test    esi, esi
0x88B0CA: mov     [esp+18h+var_4], 0
0x88B0D2: jz      short loc_88B0E3
0x88B0D4: mov     ecx, esi
0x88B0D6: call    sub_8A7060
0x88B0DB: mov     dword ptr [esi], offset ??_7bhkMemory@@6B@; const bhkMemory::`vftable'
0x88B0E1: jmp     short loc_88B0E5
0x88B0E3: xor     esi, esi
0x88B0E5: push    0
0x88B0E7: push    offset _printf
0x88B0EC: push    0
0x88B0EE: push    esi
0x88B0EF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x88B0F7: call    sub_8BBA80
0x88B0FC: add     esp, 10h
0x88B0FF: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x88B103: jnz     short loc_88B110
0x88B105: mov     eax, [esi]
0x88B107: mov     edx, [eax+34h]
0x88B10A: push    1
0x88B10C: mov     ecx, esi
0x88B10E: call    edx
0x88B110: mov     esi, offset unk_B47900
0x88B115: mov     ecx, esi
0x88B117: and     ecx, 0Fh
0x88B11A: mov     edx, 60000h
0x88B11F: jz      short loc_88B130
0x88B121: mov     eax, 10h
0x88B126: sub     eax, ecx
0x88B128: lea     esi, unk_B47900[eax]
0x88B12E: sub     edx, eax
0x88B130: mov     ecx, large fs:2Ch
0x88B137: mov     eax, ds:0BA9DE4h
0x88B13C: mov     eax, [ecx+eax*4]
0x88B13F: mov     ecx, [eax+19Ch]
0x88B145: test    ecx, ecx
0x88B147: jnz     short loc_88B14F
0x88B149: mov     ecx, ds:0BA7D9Ch
0x88B14F: mov     eax, [ecx]
0x88B151: push    edx
0x88B152: mov     edx, [eax]
0x88B154: push    esi
0x88B155: call    edx
0x88B157: call    sub_8A83C0
0x88B15C: mov     ecx, ds:0BA7D98h
0x88B162: mov     eax, [ecx]
0x88B164: mov     edx, [eax+10h]
0x88B167: push    24h ; '$'
0x88B169: push    18h
0x88B16B: call    edx
0x88B16D: mov     ecx, eax
0x88B16F: mov     word ptr [eax+4], 18h
0x88B175: call    sub_88A570
0x88B17A: push    offset sub_8B7E10
0x88B17F: push    offset aBhkboxshape; "bhkBoxShape"
0x88B184: mov     ds:0BA7904h, eax
0x88B189: call    sub_712590
0x88B18E: push    offset sub_8C9C80
0x88B193: push    offset aBhkconvexsweep; "bhkConvexSweepShape"
0x88B198: call    sub_712590
0x88B19D: push    offset sub_8C93F0
0x88B1A2: push    offset aBhkconvextrans; "bhkConvexTransformShape"
0x88B1A7: call    sub_712590
0x88B1AC: push    offset sub_8C8900
0x88B1B1: push    offset aBhkconvexverti; "bhkConvexVerticesShape"
0x88B1B6: call    sub_712590
0x88B1BB: push    offset sub_8C8100
0x88B1C0: push    offset aBhkcylindersha; "bhkCylinderShape"
0x88B1C5: call    sub_712590
0x88B1CA: push    offset sub_8B7470
0x88B1CF: push    offset aBhkmultisphere; "bhkMultiSphereShape"
0x88B1D4: call    sub_712590
0x88B1D9: push    offset sub_8C62B0
0x88B1DE: push    offset aBhkmeshshape; "bhkMeshShape"
0x88B1E3: call    sub_712590
0x88B1E8: push    offset sub_8C62B0
0x88B1ED: push    offset aBhknitristrips; "bhkNiTriStripsShape"
0x88B1F2: call    sub_712590
0x88B1F7: add     esp, 40h
0x88B1FA: push    offset sub_8C5160
0x88B1FF: push    offset aBhkpackednitri; "bhkPackedNiTriStripsShape"
0x88B204: call    sub_712590
0x88B209: push    offset sub_8C4840
0x88B20E: push    offset aHkpackednitris; "hkPackedNiTriStripsData"
0x88B213: call    sub_712590
0x88B218: push    offset sub_8C4210
0x88B21D: push    offset aBhkplaneshape; "bhkPlaneShape"
0x88B222: call    sub_712590
0x88B227: push    offset sub_8AF380
0x88B22C: push    offset aBhksphereshape; "bhkSphereShape"
0x88B231: call    sub_712590
0x88B236: push    offset sub_8C3D20
0x88B23B: push    offset aBhktrianglesha; "bhkTriangleShape"
0x88B240: call    sub_712590
0x88B245: push    offset sub_8C33C0
0x88B24A: push    offset aBhkmoppbvtrees; "bhkMoppBvTreeShape"
0x88B24F: call    sub_712590
0x88B254: push    offset sub_8A1B80
0x88B259: push    offset aBhktransformsh; "bhkTransformShape"
0x88B25E: call    sub_712590
0x88B263: push    offset sub_8B6780
0x88B268: push    offset aBhkcapsuleshap; "bhkCapsuleShape"
0x88B26D: call    sub_712590
0x88B272: add     esp, 40h
0x88B275: push    offset sub_8A0EF0
0x88B27A: push    offset aBhklistshape; "bhkListShape"
0x88B27F: call    sub_712590
0x88B284: push    offset sub_8C2FB0
0x88B289: push    offset aBhkballandsock; "bhkBallAndSocketConstraint"
0x88B28E: call    sub_712590
0x88B293: push    offset sub_8C2690
0x88B298: push    offset aBhkhingeconstr; "bhkHingeConstraint"
0x88B29D: call    sub_712590
0x88B2A2: push    offset sub_8C2020
0x88B2A7: push    offset aBhkfixedconstr; "bhkFixedConstraint"
0x88B2AC: call    sub_712590
0x88B2B1: push    offset sub_8B2BE0
0x88B2B6: push    offset aBhklimitedhing; "bhkLimitedHingeConstraint"
0x88B2BB: call    sub_712590
0x88B2C0: push    offset sub_8C17B0
0x88B2C5: push    offset aBhkprismaticco; "bhkPrismaticConstraint"
0x88B2CA: call    sub_712590
0x88B2CF: push    offset sub_8C09E0
0x88B2D4: push    offset aBhkragdollcons; "bhkRagdollConstraint"
0x88B2D9: call    sub_712590
0x88B2DE: push    offset sub_8C05C0
0x88B2E3: push    offset aBhkstiffspring; "bhkStiffSpringConstraint"
0x88B2E8: call    sub_712590
0x88B2ED: add     esp, 40h
0x88B2F0: push    offset sub_8BFE90
0x88B2F5: push    offset aBhkwheelconstr; "bhkWheelConstraint"
0x88B2FA: call    sub_712590
0x88B2FF: push    offset sub_8BF6C0
0x88B304: push    offset aBhkbreakableco; "bhkBreakableConstraint"
0x88B309: call    sub_712590
0x88B30E: push    offset sub_8BEFC0
0x88B313: push    offset aBhkmalleableco; "bhkMalleableConstraint"
0x88B318: call    sub_712590
0x88B31D: push    offset sub_89E430
0x88B322: push    offset aBhkmousespring; "bhkMouseSpringAction"
0x88B327: call    sub_712590
0x88B32C: push    offset sub_8BE8E0
0x88B331: push    offset aBhkmotoraction; "bhkMotorAction"
0x88B336: call    sub_712590
0x88B33B: push    offset sub_8BE240
0x88B340: push    offset aBhkdashpotacti; "bhkDashpotAction"
0x88B345: call    sub_712590
0x88B34A: push    offset sub_8BDCE0
0x88B34F: push    offset aBhkangulardash; "bhkAngularDashpotAction"
0x88B354: call    sub_712590
0x88B359: push    offset sub_8BD780
0x88B35E: push    offset aBhkspringactio; "bhkSpringAction"
0x88B363: call    sub_712590
0x88B368: add     esp, 40h
0x88B36B: push    offset sub_8BA750
0x88B370: push    offset aBhkaabbphantom; "bhkAabbPhantom"
0x88B375: call    sub_712590
0x88B37A: push    offset sub_89E960
0x88B37F: push    offset aBhkcollisionob; "bhkCollisionObject"
0x88B384: call    sub_712590
0x88B389: push    offset sub_89EFC0
0x88B38E: push    offset aBhkpcollisiono; "bhkPCollisionObject"
0x88B393: call    sub_712590
0x88B398: push    offset sub_8B71B0
0x88B39D: push    offset aBhkspcollision; "bhkSPCollisionObject"
0x88B3A2: call    sub_712590
0x88B3A7: push    offset sub_88ED20
0x88B3AC: push    offset aBhkblendcollis; "bhkBlendCollisionObject"
0x88B3B1: call    sub_712590
0x88B3B6: push    offset sub_8AA920
0x88B3BB: push    offset aBhkblendcontro; "bhkBlendController"
0x88B3C0: call    sub_712590
0x88B3C5: push    offset sub_8A41F0
0x88B3CA: push    offset aBhkrigidbody; "bhkRigidBody"
0x88B3CF: call    sub_712590
0x88B3D4: push    offset sub_8B97A0
0x88B3D9: push    offset aBhkrigidbodyt; "bhkRigidBodyT"
0x88B3DE: call    sub_712590
0x88B3E3: add     esp, 40h
0x88B3E6: push    offset sub_8AF070
0x88B3EB: push    offset aBhksimpleshape; "bhkSimpleShapePhantom"
0x88B3F0: call    sub_712590
0x88B3F5: push    offset sub_8BD350
0x88B3FA: push    offset aBhkcachingshap; "bhkCachingShapePhantom"
0x88B3FF: call    sub_712590
0x88B404: push    offset sub_8BCF80
0x88B409: push    offset aBhkextradata; "bhkExtraData"
0x88B40E: call    sub_712590
0x88B413: add     esp, 18h
0x88B416: mov     ecx, dword ptr [esp+18h+var_C]
0x88B41A: mov     large fs:0, ecx
0x88B421: pop     ecx
0x88B422: pop     esi
0x88B423: add     esp, 10h
0x88B426: retn
