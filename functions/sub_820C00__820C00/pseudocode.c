// Oblivion ShadowLight pass-pool initializer. Mode-5 pool[6..9] each owns one stage configured for texcoord 0, wrap addressing, linear MAG/MIN/MIP filtering, and disabled fixed-function color/alpha ops. All four disable alpha blending and stencil, enable Z test/write with LESS_EQUAL, and differ only in alpha-test enable: pools 6/8 off, 7/9 on. Opaque shaders ignore the unbound stage.
void ShadowLightShader_InitializePassPool()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  unsigned int **v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // ebp
  NiD3DTextureStage *v7; // eax
  unsigned int **v8; // ebp
  NiD3DTextureStage *v9; // eax
  unsigned int **v10; // ebp
  NiD3DTextureStage *v11; // eax
  unsigned int **v12; // ebp
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // ebp
  NiD3DTextureStage *v15; // eax
  unsigned int **v16; // ebp
  NiD3DTextureStage *v17; // eax
  unsigned int **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *VertexShader; // eax
  int v21; // ebx
  NiD3DVertexShader *v22; // ebp
  NiD3DPixelShader *PixelShader; // eax
  int v24; // ebx
  NiD3DPixelShader *v25; // ebp
  unsigned int **v26; // ebp
  NiD3DTextureStage *v27; // eax
  unsigned int **v28; // ebp
  NiD3DTextureStage *v29; // eax
  unsigned int **v30; // ebp
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage **v32; // eax
  NiD3DTextureStage *v33; // eax
  unsigned int *v34; // edi
  NiD3DTextureStage **v35; // eax
  NiD3DTextureStage *v36; // eax
  unsigned int *v37; // edi
  NiD3DTextureStage **v38; // eax
  NiD3DTextureStage *v39; // eax
  NiD3DTextureStage *v40; // edi
  NiD3DTextureStage **v41; // eax
  NiD3DTextureStage *v42; // eax
  unsigned int *v43; // edi
  NiD3DTextureStage **v44; // eax
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // eax
  NiD3DTextureStage *v47; // eax
  unsigned int *v48; // edi
  NiD3DTextureStage **v49; // eax
  NiD3DTextureStage *v50; // eax
  unsigned int *v51; // edi
  NiD3DTextureStage **v52; // eax
  NiD3DTextureStage *v53; // eax
  unsigned int *v54; // edi
  NiD3DTextureStage **v55; // eax
  NiD3DTextureStage *v56; // eax
  unsigned int *v57; // edi
  NiD3DTextureStage **v58; // eax
  NiD3DTextureStage *v59; // eax
  unsigned int *v60; // edi
  NiD3DTextureStage **v61; // eax
  NiD3DTextureStage *v62; // eax
  NiD3DTextureStage *v63; // edi
  NiD3DTextureStage **v64; // eax
  NiD3DTextureStage *v65; // eax
  unsigned int *v66; // edi
  NiD3DTextureStage **v67; // eax
  NiD3DTextureStage *v68; // eax
  NiD3DTextureStage **v69; // eax
  NiD3DTextureStage *v70; // eax
  unsigned int *v71; // edi
  NiD3DTextureStage **v72; // eax
  NiD3DTextureStage *v73; // eax
  unsigned int *v74; // edi
  NiD3DTextureStage **v75; // eax
  NiD3DTextureStage *v76; // eax
  unsigned int *v77; // edi
  NiD3DTextureStage **v78; // eax
  NiD3DTextureStage *v79; // eax
  unsigned int *v80; // edi
  NiD3DTextureStage **v81; // eax
  NiD3DTextureStage *v82; // eax
  unsigned int *v83; // edi
  NiD3DTextureStage **v84; // eax
  NiD3DTextureStage *v85; // eax
  NiD3DTextureStage *v86; // edi
  NiD3DTextureStage **v87; // eax
  NiD3DTextureStage *v88; // eax
  unsigned int *v89; // edi
  NiD3DTextureStage **v90; // eax
  NiD3DTextureStage *v91; // eax
  NiD3DTextureStage **v92; // eax
  NiD3DTextureStage *v93; // eax
  unsigned int *v94; // edi
  NiD3DTextureStage **v95; // eax
  NiD3DTextureStage *v96; // eax
  unsigned int *v97; // edi
  NiD3DTextureStage **v98; // eax
  NiD3DTextureStage *v99; // eax
  unsigned int *v100; // edi
  NiD3DTextureStage **v101; // eax
  NiD3DTextureStage *v102; // eax
  unsigned int *v103; // edi
  NiD3DTextureStage **v104; // eax
  NiD3DTextureStage *v105; // eax
  unsigned int *v106; // edi
  NiD3DTextureStage **v107; // eax
  NiD3DTextureStage *v108; // eax
  NiD3DTextureStage *v109; // edi
  NiD3DTextureStage **v110; // eax
  NiD3DTextureStage *v111; // eax
  unsigned int *v112; // edi
  NiD3DTextureStage **v113; // eax
  NiD3DTextureStage *v114; // eax
  NiD3DTextureStage **v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  NiD3DTextureStage **v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  NiD3DTextureStage **v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  NiD3DTextureStage **v124; // eax
  NiD3DTextureStage *v125; // eax
  unsigned int *v126; // edi
  NiD3DTextureStage **v127; // eax
  NiD3DTextureStage *v128; // eax
  unsigned int *v129; // edi
  NiD3DTextureStage **v130; // eax
  NiD3DTextureStage *v131; // eax
  NiD3DTextureStage *v132; // edi
  NiD3DTextureStage **v133; // eax
  NiD3DTextureStage *v134; // eax
  unsigned int *v135; // edi
  NiD3DTextureStage **v136; // eax
  NiD3DTextureStage *v137; // eax
  NiD3DTextureStage **v138; // eax
  NiD3DTextureStage *v139; // eax
  unsigned int *v140; // edi
  NiD3DTextureStage **v141; // eax
  NiD3DTextureStage *v142; // eax
  unsigned int *v143; // edi
  NiD3DTextureStage **v144; // eax
  NiD3DTextureStage *v145; // eax
  unsigned int *v146; // edi
  NiD3DTextureStage **v147; // eax
  NiD3DTextureStage *v148; // eax
  unsigned int *v149; // edi
  NiD3DTextureStage **v150; // eax
  NiD3DTextureStage *v151; // eax
  unsigned int *v152; // edi
  NiD3DTextureStage **v153; // eax
  NiD3DTextureStage *v154; // eax
  NiD3DTextureStage *v155; // edi
  NiD3DTextureStage **v156; // eax
  NiD3DTextureStage *v157; // eax
  unsigned int *v158; // edi
  NiD3DTextureStage **v159; // eax
  NiD3DTextureStage *v160; // eax
  NiD3DTextureStage **v161; // eax
  NiD3DTextureStage *v162; // eax
  unsigned int *v163; // edi
  NiD3DTextureStage **v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // edi
  NiD3DTextureStage **v167; // eax
  NiD3DTextureStage *v168; // eax
  unsigned int *v169; // edi
  NiD3DTextureStage **v170; // eax
  NiD3DTextureStage *v171; // eax
  unsigned int *v172; // edi
  NiD3DTextureStage **v173; // eax
  NiD3DTextureStage *v174; // eax
  unsigned int *v175; // edi
  NiD3DTextureStage **v176; // eax
  NiD3DTextureStage *v177; // eax
  NiD3DTextureStage *v178; // edi
  NiD3DTextureStage **v179; // eax
  NiD3DTextureStage *v180; // eax
  unsigned int *v181; // edi
  NiD3DTextureStage **v182; // eax
  NiD3DTextureStage *v183; // eax
  NiD3DTextureStage **v184; // eax
  NiD3DTextureStage *v185; // eax
  unsigned int *v186; // edi
  NiD3DTextureStage **v187; // eax
  NiD3DTextureStage *v188; // eax
  unsigned int *v189; // edi
  NiD3DTextureStage **v190; // eax
  NiD3DTextureStage *v191; // eax
  unsigned int *v192; // edi
  NiD3DTextureStage **v193; // eax
  NiD3DTextureStage *v194; // eax
  unsigned int *v195; // edi
  NiD3DTextureStage **v196; // eax
  NiD3DTextureStage *v197; // eax
  unsigned int *v198; // edi
  NiD3DTextureStage **v199; // eax
  NiD3DTextureStage *v200; // eax
  NiD3DTextureStage *v201; // edi
  NiD3DTextureStage **v202; // eax
  NiD3DTextureStage *v203; // eax
  unsigned int *v204; // edi
  NiD3DTextureStage **v205; // eax
  NiD3DTextureStage *v206; // eax
  NiD3DTextureStage **v207; // eax
  NiD3DTextureStage *v208; // eax
  unsigned int *v209; // edi
  NiD3DTextureStage **v210; // eax
  NiD3DTextureStage *v211; // eax
  unsigned int *v212; // edi
  NiD3DTextureStage **v213; // eax
  NiD3DTextureStage *v214; // eax
  unsigned int *v215; // edi
  NiD3DTextureStage **v216; // eax
  NiD3DTextureStage *v217; // eax
  unsigned int *v218; // edi
  NiD3DTextureStage **v219; // eax
  NiD3DTextureStage *v220; // eax
  unsigned int *v221; // edi
  NiD3DTextureStage **v222; // eax
  NiD3DTextureStage *v223; // eax
  NiD3DTextureStage *v224; // edi
  NiD3DTextureStage **v225; // eax
  NiD3DTextureStage *v226; // eax
  unsigned int *v227; // edi
  NiD3DTextureStage **v228; // eax
  NiD3DTextureStage *v229; // eax
  NiD3DPass *v230; // esi
  NiD3DTextureStage **v231; // eax
  NiD3DTextureStage *v232; // eax
  unsigned int *v233; // edi
  NiD3DTextureStage **v234; // eax
  NiD3DTextureStage *v235; // eax
  unsigned int *v236; // edi
  NiD3DTextureStage **v237; // eax
  NiD3DTextureStage *v238; // eax
  unsigned int *v239; // edi
  NiD3DTextureStage **v240; // eax
  NiD3DTextureStage *v241; // eax
  unsigned int *v242; // edi
  NiD3DTextureStage **v243; // eax
  NiD3DTextureStage *v244; // eax
  unsigned int *v245; // edi
  NiD3DTextureStage **v246; // eax
  NiD3DTextureStage *v247; // eax
  NiD3DTextureStage *v248; // edi
  NiD3DTextureStage **v249; // eax
  NiD3DTextureStage *v250; // eax
  unsigned int *v251; // edi
  NiD3DTextureStage **v252; // eax
  NiD3DTextureStage *v253; // eax
  NiD3DPass *v254; // esi
  NiD3DTextureStage **v255; // eax
  NiD3DTextureStage *v256; // eax
  unsigned int *v257; // edi
  NiD3DTextureStage **v258; // eax
  NiD3DTextureStage *v259; // eax
  unsigned int *v260; // edi
  NiD3DTextureStage **v261; // eax
  NiD3DTextureStage *v262; // eax
  unsigned int *v263; // edi
  NiD3DTextureStage **v264; // eax
  NiD3DTextureStage *v265; // eax
  unsigned int *v266; // edi
  NiD3DTextureStage **v267; // eax
  NiD3DTextureStage *v268; // eax
  unsigned int *v269; // edi
  NiD3DTextureStage **v270; // eax
  NiD3DTextureStage *v271; // eax
  NiD3DTextureStage *v272; // edi
  NiD3DTextureStage **v273; // eax
  NiD3DTextureStage *v274; // eax
  unsigned int *v275; // edi
  NiD3DTextureStage **v276; // eax
  NiD3DTextureStage *v277; // eax
  NiD3DPass *v278; // esi
  NiD3DTextureStage **v279; // eax
  NiD3DTextureStage *v280; // eax
  unsigned int *v281; // edi
  NiD3DTextureStage **v282; // eax
  NiD3DTextureStage *v283; // eax
  unsigned int *v284; // edi
  NiD3DTextureStage **v285; // eax
  NiD3DTextureStage *v286; // eax
  unsigned int *v287; // edi
  NiD3DTextureStage **v288; // eax
  NiD3DTextureStage *v289; // eax
  unsigned int *v290; // edi
  NiD3DTextureStage **v291; // eax
  NiD3DTextureStage *v292; // eax
  unsigned int *v293; // edi
  NiD3DTextureStage **v294; // eax
  NiD3DTextureStage *v295; // eax
  NiD3DTextureStage *v296; // edi
  NiD3DTextureStage **v297; // eax
  NiD3DTextureStage *v298; // eax
  unsigned int *v299; // edi
  NiD3DTextureStage **v300; // eax
  NiD3DTextureStage *v301; // eax
  NiD3DPass *v302; // esi
  NiD3DTextureStage **v303; // eax
  NiD3DTextureStage *v304; // eax
  unsigned int *v305; // edi
  NiD3DTextureStage **v306; // eax
  NiD3DTextureStage *v307; // eax
  unsigned int *v308; // edi
  NiD3DTextureStage **v309; // eax
  NiD3DTextureStage *v310; // eax
  unsigned int *v311; // edi
  NiD3DTextureStage **v312; // eax
  NiD3DTextureStage *v313; // eax
  unsigned int *v314; // edi
  NiD3DTextureStage **v315; // eax
  NiD3DTextureStage *v316; // eax
  unsigned int *v317; // edi
  NiD3DTextureStage **v318; // eax
  NiD3DTextureStage *v319; // eax
  NiD3DTextureStage *v320; // edi
  NiD3DTextureStage **v321; // eax
  NiD3DTextureStage *v322; // eax
  unsigned int *v323; // edi
  NiD3DTextureStage **v324; // eax
  NiD3DTextureStage *v325; // eax
  NiD3DPass *v326; // esi
  NiD3DTextureStage **v327; // eax
  NiD3DTextureStage *v328; // eax
  unsigned int *v329; // edi
  NiD3DTextureStage **v330; // eax
  NiD3DTextureStage *v331; // eax
  unsigned int *v332; // edi
  NiD3DTextureStage **v333; // eax
  NiD3DTextureStage *v334; // eax
  unsigned int *v335; // edi
  NiD3DTextureStage **v336; // eax
  NiD3DTextureStage *v337; // eax
  unsigned int *v338; // edi
  NiD3DTextureStage **v339; // eax
  NiD3DTextureStage *v340; // eax
  unsigned int *v341; // edi
  NiD3DTextureStage **v342; // eax
  NiD3DTextureStage *v343; // eax
  NiD3DTextureStage *v344; // edi
  NiD3DTextureStage **v345; // eax
  NiD3DTextureStage *v346; // eax
  unsigned int *v347; // edi
  NiD3DTextureStage **v348; // eax
  NiD3DTextureStage *v349; // eax
  NiD3DPass *v350; // esi
  NiD3DTextureStage **v351; // eax
  NiD3DTextureStage *v352; // eax
  unsigned int *v353; // edi
  NiD3DTextureStage **v354; // eax
  NiD3DTextureStage *v355; // eax
  unsigned int *v356; // edi
  NiD3DTextureStage **v357; // eax
  NiD3DTextureStage *v358; // eax
  unsigned int *v359; // edi
  NiD3DTextureStage **v360; // eax
  NiD3DTextureStage *v361; // eax
  unsigned int *v362; // edi
  NiD3DTextureStage **v363; // eax
  NiD3DTextureStage *v364; // eax
  unsigned int *v365; // edi
  NiD3DTextureStage **v366; // eax
  NiD3DTextureStage *v367; // eax
  NiD3DTextureStage *v368; // edi
  NiD3DTextureStage **v369; // eax
  NiD3DTextureStage *v370; // eax
  unsigned int *v371; // edi
  NiD3DTextureStage **v372; // eax
  NiD3DTextureStage *v373; // eax
  NiD3DPass *v374; // esi
  NiD3DTextureStage **v375; // eax
  NiD3DTextureStage *v376; // eax
  unsigned int *v377; // edi
  NiD3DTextureStage **v378; // eax
  NiD3DTextureStage *v379; // eax
  unsigned int *v380; // edi
  NiD3DTextureStage **v381; // eax
  NiD3DTextureStage *v382; // eax
  unsigned int *v383; // edi
  NiD3DTextureStage **v384; // eax
  NiD3DTextureStage *v385; // eax
  unsigned int *v386; // edi
  NiD3DTextureStage **v387; // eax
  NiD3DTextureStage *v388; // eax
  unsigned int *v389; // edi
  NiD3DTextureStage **v390; // eax
  NiD3DTextureStage *v391; // eax
  NiD3DTextureStage *v392; // edi
  NiD3DTextureStage **v393; // eax
  NiD3DTextureStage *v394; // eax
  unsigned int *v395; // edi
  NiD3DTextureStage **v396; // eax
  NiD3DTextureStage *v397; // eax
  NiD3DPass *v398; // esi
  NiD3DTextureStage **v399; // eax
  NiD3DTextureStage *v400; // eax
  unsigned int *v401; // edi
  NiD3DTextureStage **v402; // eax
  NiD3DTextureStage *v403; // eax
  unsigned int *v404; // edi
  NiD3DTextureStage **v405; // eax
  NiD3DTextureStage *v406; // eax
  unsigned int *v407; // edi
  NiD3DTextureStage **v408; // eax
  NiD3DTextureStage *v409; // eax
  unsigned int *v410; // edi
  NiD3DTextureStage **v411; // eax
  NiD3DTextureStage *v412; // eax
  unsigned int *v413; // edi
  NiD3DTextureStage **v414; // eax
  NiD3DTextureStage *v415; // eax
  NiD3DTextureStage *v416; // edi
  NiD3DTextureStage **v417; // eax
  NiD3DTextureStage *v418; // eax
  unsigned int *v419; // edi
  NiD3DTextureStage **v420; // eax
  NiD3DTextureStage *v421; // eax
  NiD3DPass *v422; // esi
  NiD3DTextureStage **v423; // eax
  NiD3DTextureStage *v424; // eax
  unsigned int *v425; // edi
  NiD3DTextureStage **v426; // eax
  NiD3DTextureStage *v427; // eax
  unsigned int *v428; // edi
  NiD3DTextureStage **v429; // eax
  NiD3DTextureStage *v430; // eax
  unsigned int *v431; // edi
  NiD3DTextureStage **v432; // eax
  NiD3DTextureStage *v433; // eax
  unsigned int *v434; // edi
  NiD3DTextureStage **v435; // eax
  NiD3DTextureStage *v436; // eax
  unsigned int *v437; // edi
  NiD3DTextureStage **v438; // eax
  NiD3DTextureStage *v439; // eax
  NiD3DTextureStage *v440; // edi
  NiD3DTextureStage **v441; // eax
  NiD3DTextureStage *v442; // eax
  unsigned int *v443; // edi
  NiD3DTextureStage **v444; // eax
  NiD3DTextureStage *v445; // eax
  NiD3DPass *v446; // esi
  NiD3DTextureStage **v447; // eax
  NiD3DTextureStage *v448; // eax
  unsigned int *v449; // edi
  NiD3DTextureStage **v450; // eax
  NiD3DTextureStage *v451; // eax
  unsigned int *v452; // edi
  NiD3DTextureStage **v453; // eax
  NiD3DTextureStage *v454; // eax
  unsigned int *v455; // edi
  NiD3DTextureStage **v456; // eax
  NiD3DTextureStage *v457; // eax
  unsigned int *v458; // edi
  NiD3DTextureStage **v459; // eax
  NiD3DTextureStage *v460; // eax
  unsigned int *v461; // edi
  NiD3DTextureStage **v462; // eax
  NiD3DTextureStage *v463; // eax
  NiD3DTextureStage *v464; // edi
  NiD3DTextureStage **v465; // eax
  NiD3DTextureStage *v466; // eax
  unsigned int *v467; // edi
  NiD3DTextureStage **v468; // eax
  NiD3DTextureStage *v469; // eax
  NiD3DPass *v470; // esi
  NiD3DTextureStage **v471; // eax
  NiD3DTextureStage *v472; // eax
  unsigned int *v473; // edi
  NiD3DTextureStage **v474; // eax
  NiD3DTextureStage *v475; // eax
  unsigned int *v476; // edi
  NiD3DTextureStage **v477; // eax
  NiD3DTextureStage *v478; // eax
  unsigned int *v479; // edi
  NiD3DTextureStage **v480; // eax
  NiD3DTextureStage *v481; // eax
  unsigned int *v482; // edi
  NiD3DTextureStage **v483; // eax
  NiD3DTextureStage *v484; // eax
  unsigned int *v485; // edi
  NiD3DTextureStage **v486; // eax
  NiD3DTextureStage *v487; // eax
  NiD3DTextureStage *v488; // edi
  NiD3DTextureStage **v489; // eax
  NiD3DTextureStage *v490; // eax
  unsigned int *v491; // edi
  NiD3DTextureStage **v492; // eax
  NiD3DTextureStage *v493; // eax
  NiD3DPass *v494; // esi
  NiD3DTextureStage **v495; // eax
  NiD3DTextureStage *v496; // eax
  unsigned int *v497; // edi
  NiD3DTextureStage **v498; // eax
  NiD3DTextureStage *v499; // eax
  unsigned int *v500; // edi
  NiD3DTextureStage **v501; // eax
  NiD3DTextureStage *v502; // eax
  unsigned int *v503; // edi
  NiD3DTextureStage **v504; // eax
  NiD3DTextureStage *v505; // eax
  unsigned int *v506; // edi
  NiD3DTextureStage **v507; // eax
  NiD3DTextureStage *v508; // eax
  unsigned int *v509; // edi
  NiD3DTextureStage **v510; // eax
  NiD3DTextureStage *v511; // eax
  NiD3DTextureStage *v512; // edi
  NiD3DTextureStage **v513; // eax
  NiD3DTextureStage *v514; // eax
  unsigned int *v515; // edi
  NiD3DTextureStage **v516; // eax
  NiD3DTextureStage *v517; // eax
  NiD3DPass *v518; // esi
  NiD3DTextureStage **v519; // eax
  NiD3DTextureStage *v520; // eax
  unsigned int *v521; // edi
  NiD3DTextureStage **v522; // eax
  NiD3DTextureStage *v523; // eax
  unsigned int *v524; // edi
  NiD3DTextureStage **v525; // eax
  NiD3DTextureStage *v526; // eax
  unsigned int *v527; // edi
  NiD3DTextureStage **v528; // eax
  NiD3DTextureStage *v529; // eax
  unsigned int *v530; // edi
  NiD3DTextureStage **v531; // eax
  NiD3DTextureStage *v532; // eax
  unsigned int *v533; // edi
  NiD3DTextureStage **v534; // eax
  NiD3DTextureStage *v535; // eax
  NiD3DTextureStage *v536; // edi
  NiD3DTextureStage **v537; // eax
  NiD3DTextureStage *v538; // eax
  unsigned int *v539; // edi
  NiD3DTextureStage **v540; // eax
  NiD3DTextureStage *v541; // eax
  NiD3DPass *v542; // esi
  NiD3DTextureStage **v543; // eax
  NiD3DTextureStage *v544; // eax
  unsigned int *v545; // edi
  NiD3DTextureStage **v546; // eax
  NiD3DTextureStage *v547; // eax
  unsigned int *v548; // edi
  NiD3DTextureStage **v549; // eax
  NiD3DTextureStage *v550; // eax
  unsigned int *v551; // edi
  NiD3DTextureStage **v552; // eax
  NiD3DTextureStage *v553; // eax
  unsigned int *v554; // edi
  NiD3DTextureStage **v555; // eax
  NiD3DTextureStage *v556; // eax
  unsigned int *v557; // edi
  NiD3DTextureStage **v558; // eax
  NiD3DTextureStage *v559; // eax
  NiD3DTextureStage *v560; // edi
  NiD3DTextureStage **v561; // eax
  NiD3DTextureStage *v562; // eax
  unsigned int *v563; // edi
  NiD3DTextureStage **v564; // eax
  NiD3DTextureStage *v565; // eax
  NiD3DPass *v566; // esi
  NiD3DTextureStage **v567; // eax
  NiD3DTextureStage *v568; // eax
  unsigned int *v569; // edi
  NiD3DTextureStage **v570; // eax
  NiD3DTextureStage *v571; // eax
  unsigned int *v572; // edi
  NiD3DTextureStage **v573; // eax
  NiD3DTextureStage *v574; // eax
  unsigned int *v575; // edi
  NiD3DTextureStage **v576; // eax
  NiD3DTextureStage *v577; // eax
  unsigned int *v578; // edi
  NiD3DTextureStage **v579; // eax
  NiD3DTextureStage *v580; // eax
  unsigned int *v581; // edi
  NiD3DTextureStage **v582; // eax
  NiD3DTextureStage *v583; // eax
  NiD3DTextureStage *v584; // edi
  NiD3DTextureStage **v585; // eax
  NiD3DTextureStage *v586; // eax
  unsigned int *v587; // edi
  NiD3DTextureStage **v588; // eax
  NiD3DTextureStage *v589; // eax
  NiD3DPass *v590; // esi
  NiD3DTextureStage **v591; // eax
  NiD3DTextureStage *v592; // eax
  unsigned int *v593; // edi
  NiD3DTextureStage **v594; // eax
  NiD3DTextureStage *v595; // eax
  unsigned int *v596; // edi
  NiD3DTextureStage **v597; // eax
  NiD3DTextureStage *v598; // eax
  unsigned int *v599; // edi
  NiD3DTextureStage **v600; // eax
  NiD3DTextureStage *v601; // eax
  unsigned int *v602; // edi
  NiD3DTextureStage **v603; // eax
  NiD3DTextureStage *v604; // eax
  unsigned int *v605; // edi
  NiD3DTextureStage **v606; // eax
  NiD3DTextureStage *v607; // eax
  NiD3DTextureStage *v608; // edi
  NiD3DTextureStage **v609; // eax
  NiD3DTextureStage *v610; // eax
  unsigned int *v611; // edi
  NiD3DTextureStage **v612; // eax
  NiD3DTextureStage *v613; // eax
  NiD3DPass *v614; // esi
  NiD3DTextureStage **v615; // eax
  NiD3DTextureStage *v616; // eax
  unsigned int *v617; // edi
  NiD3DTextureStage **v618; // eax
  NiD3DTextureStage *v619; // eax
  unsigned int *v620; // edi
  NiD3DTextureStage **v621; // eax
  NiD3DTextureStage *v622; // eax
  unsigned int *v623; // edi
  NiD3DTextureStage **v624; // eax
  NiD3DTextureStage *v625; // eax
  unsigned int *v626; // edi
  NiD3DTextureStage **v627; // eax
  NiD3DTextureStage *v628; // eax
  unsigned int *v629; // edi
  NiD3DTextureStage **v630; // eax
  NiD3DTextureStage *v631; // eax
  NiD3DTextureStage *v632; // edi
  NiD3DTextureStage **v633; // eax
  NiD3DTextureStage *v634; // eax
  unsigned int *v635; // edi
  NiD3DTextureStage **v636; // eax
  NiD3DTextureStage *v637; // eax
  NiD3DPass *v638; // esi
  NiD3DTextureStage **v639; // eax
  NiD3DTextureStage *v640; // eax
  NiD3DPass *v641; // esi
  NiD3DTextureStage **v642; // eax
  NiD3DTextureStage *v643; // eax
  NiD3DPass *v644; // esi
  NiD3DTextureStage **v645; // eax
  NiD3DTextureStage *v646; // eax
  NiD3DPass *v647; // esi
  NiD3DTextureStage **v648; // eax
  NiD3DTextureStage *v649; // eax
  unsigned int *a3; // [esp+14h] [ebp-384h] BYREF
  NiD3DPassVtbl **v651; // [esp+18h] [ebp-380h] BYREF
  NiD3DTextureStage *v652; // [esp+1Ch] [ebp-37Ch] BYREF
  NiD3DTextureStage *v653; // [esp+20h] [ebp-378h] BYREF
  NiD3DTextureStage *v654; // [esp+24h] [ebp-374h] BYREF
  NiD3DTextureStage *v655; // [esp+28h] [ebp-370h] BYREF
  NiD3DTextureStage *v656; // [esp+2Ch] [ebp-36Ch] BYREF
  NiD3DTextureStage *v657; // [esp+30h] [ebp-368h] BYREF
  NiD3DTextureStage *v658; // [esp+34h] [ebp-364h] BYREF
  NiD3DTextureStage *v659; // [esp+38h] [ebp-360h] BYREF
  NiD3DTextureStage *v660; // [esp+3Ch] [ebp-35Ch] BYREF
  NiD3DTextureStage *v661; // [esp+40h] [ebp-358h] BYREF
  NiD3DTextureStage *v662; // [esp+44h] [ebp-354h] BYREF
  NiD3DTextureStage *v663; // [esp+48h] [ebp-350h] BYREF
  NiD3DTextureStage *v664; // [esp+4Ch] [ebp-34Ch] BYREF
  NiD3DTextureStage *v665; // [esp+50h] [ebp-348h] BYREF
  NiD3DTextureStage *v666; // [esp+54h] [ebp-344h] BYREF
  NiD3DTextureStage *v667; // [esp+58h] [ebp-340h] BYREF
  NiD3DTextureStage *v668; // [esp+5Ch] [ebp-33Ch] BYREF
  NiD3DTextureStage *v669; // [esp+60h] [ebp-338h] BYREF
  NiD3DTextureStage *v670; // [esp+64h] [ebp-334h] BYREF
  NiD3DTextureStage *v671; // [esp+68h] [ebp-330h] BYREF
  NiD3DTextureStage *v672; // [esp+6Ch] [ebp-32Ch] BYREF
  NiD3DTextureStage *v673; // [esp+70h] [ebp-328h] BYREF
  NiD3DTextureStage *v674; // [esp+74h] [ebp-324h] BYREF
  NiD3DTextureStage *v675; // [esp+78h] [ebp-320h] BYREF
  NiD3DTextureStage *v676; // [esp+7Ch] [ebp-31Ch] BYREF
  NiD3DTextureStage *v677; // [esp+80h] [ebp-318h] BYREF
  NiD3DTextureStage *v678; // [esp+84h] [ebp-314h] BYREF
  NiD3DTextureStage *v679; // [esp+88h] [ebp-310h] BYREF
  NiD3DTextureStage *v680; // [esp+8Ch] [ebp-30Ch] BYREF
  NiD3DTextureStage *v681; // [esp+90h] [ebp-308h] BYREF
  NiD3DTextureStage *v682; // [esp+94h] [ebp-304h] BYREF
  NiD3DTextureStage *v683; // [esp+98h] [ebp-300h] BYREF
  NiD3DTextureStage *v684; // [esp+9Ch] [ebp-2FCh] BYREF
  NiD3DTextureStage *v685; // [esp+A0h] [ebp-2F8h] BYREF
  NiD3DTextureStage *v686; // [esp+A4h] [ebp-2F4h] BYREF
  NiD3DTextureStage *v687; // [esp+A8h] [ebp-2F0h] BYREF
  NiD3DTextureStage *v688; // [esp+ACh] [ebp-2ECh] BYREF
  NiD3DTextureStage *v689; // [esp+B0h] [ebp-2E8h] BYREF
  NiD3DTextureStage *v690; // [esp+B4h] [ebp-2E4h] BYREF
  NiD3DTextureStage *v691; // [esp+B8h] [ebp-2E0h] BYREF
  NiD3DTextureStage *v692; // [esp+BCh] [ebp-2DCh] BYREF
  NiD3DTextureStage *v693; // [esp+C0h] [ebp-2D8h] BYREF
  NiD3DTextureStage *v694; // [esp+C4h] [ebp-2D4h] BYREF
  NiD3DTextureStage *v695; // [esp+C8h] [ebp-2D0h] BYREF
  NiD3DTextureStage *v696; // [esp+CCh] [ebp-2CCh] BYREF
  NiD3DTextureStage *v697; // [esp+D0h] [ebp-2C8h] BYREF
  NiD3DTextureStage *v698; // [esp+D4h] [ebp-2C4h] BYREF
  NiD3DTextureStage *v699; // [esp+D8h] [ebp-2C0h] BYREF
  NiD3DTextureStage *v700; // [esp+DCh] [ebp-2BCh] BYREF
  NiD3DTextureStage *v701; // [esp+E0h] [ebp-2B8h] BYREF
  NiD3DTextureStage *v702; // [esp+E4h] [ebp-2B4h] BYREF
  NiD3DTextureStage *v703; // [esp+E8h] [ebp-2B0h] BYREF
  NiD3DTextureStage *v704; // [esp+ECh] [ebp-2ACh] BYREF
  NiD3DTextureStage *v705; // [esp+F0h] [ebp-2A8h] BYREF
  NiD3DTextureStage *v706; // [esp+F4h] [ebp-2A4h] BYREF
  NiD3DTextureStage *v707; // [esp+F8h] [ebp-2A0h] BYREF
  NiD3DTextureStage *v708; // [esp+FCh] [ebp-29Ch] BYREF
  NiD3DTextureStage *v709; // [esp+100h] [ebp-298h] BYREF
  NiD3DTextureStage *v710; // [esp+104h] [ebp-294h] BYREF
  NiD3DTextureStage *v711; // [esp+108h] [ebp-290h] BYREF
  NiD3DTextureStage *v712; // [esp+10Ch] [ebp-28Ch] BYREF
  NiD3DTextureStage *v713; // [esp+110h] [ebp-288h] BYREF
  NiD3DTextureStage *v714; // [esp+114h] [ebp-284h] BYREF
  NiD3DTextureStage *v715; // [esp+118h] [ebp-280h] BYREF
  NiD3DTextureStage *v716; // [esp+11Ch] [ebp-27Ch] BYREF
  NiD3DTextureStage *v717; // [esp+120h] [ebp-278h] BYREF
  NiD3DTextureStage *v718; // [esp+124h] [ebp-274h] BYREF
  NiD3DTextureStage *v719; // [esp+128h] [ebp-270h] BYREF
  NiD3DTextureStage *v720; // [esp+12Ch] [ebp-26Ch] BYREF
  NiD3DTextureStage *v721; // [esp+130h] [ebp-268h] BYREF
  NiD3DTextureStage *v722; // [esp+134h] [ebp-264h] BYREF
  NiD3DTextureStage *v723; // [esp+138h] [ebp-260h] BYREF
  NiD3DTextureStage *v724; // [esp+13Ch] [ebp-25Ch] BYREF
  NiD3DTextureStage *v725; // [esp+140h] [ebp-258h] BYREF
  NiD3DTextureStage *v726; // [esp+144h] [ebp-254h] BYREF
  NiD3DTextureStage *v727; // [esp+148h] [ebp-250h] BYREF
  NiD3DTextureStage *v728; // [esp+14Ch] [ebp-24Ch] BYREF
  NiD3DTextureStage *v729; // [esp+150h] [ebp-248h] BYREF
  NiD3DTextureStage *v730; // [esp+154h] [ebp-244h] BYREF
  NiD3DTextureStage *v731; // [esp+158h] [ebp-240h] BYREF
  NiD3DTextureStage *v732; // [esp+15Ch] [ebp-23Ch] BYREF
  NiD3DTextureStage *v733; // [esp+160h] [ebp-238h] BYREF
  NiD3DTextureStage *v734; // [esp+164h] [ebp-234h] BYREF
  NiD3DTextureStage *v735; // [esp+168h] [ebp-230h] BYREF
  NiD3DTextureStage *v736; // [esp+16Ch] [ebp-22Ch] BYREF
  NiD3DTextureStage *v737; // [esp+170h] [ebp-228h] BYREF
  NiD3DTextureStage *v738; // [esp+174h] [ebp-224h] BYREF
  NiD3DTextureStage *v739; // [esp+178h] [ebp-220h] BYREF
  NiD3DTextureStage *v740; // [esp+17Ch] [ebp-21Ch] BYREF
  NiD3DTextureStage *v741; // [esp+180h] [ebp-218h] BYREF
  NiD3DTextureStage *v742; // [esp+184h] [ebp-214h] BYREF
  NiD3DTextureStage *v743; // [esp+188h] [ebp-210h] BYREF
  NiD3DTextureStage *v744; // [esp+18Ch] [ebp-20Ch] BYREF
  NiD3DTextureStage *v745; // [esp+190h] [ebp-208h] BYREF
  NiD3DTextureStage *v746; // [esp+194h] [ebp-204h] BYREF
  NiD3DTextureStage *v747; // [esp+198h] [ebp-200h] BYREF
  NiD3DTextureStage *v748; // [esp+19Ch] [ebp-1FCh] BYREF
  NiD3DTextureStage *v749; // [esp+1A0h] [ebp-1F8h] BYREF
  NiD3DTextureStage *v750; // [esp+1A4h] [ebp-1F4h] BYREF
  NiD3DTextureStage *v751; // [esp+1A8h] [ebp-1F0h] BYREF
  NiD3DTextureStage *v752; // [esp+1ACh] [ebp-1ECh] BYREF
  NiD3DTextureStage *v753; // [esp+1B0h] [ebp-1E8h] BYREF
  NiD3DTextureStage *v754; // [esp+1B4h] [ebp-1E4h] BYREF
  NiD3DTextureStage *v755; // [esp+1B8h] [ebp-1E0h] BYREF
  NiD3DTextureStage *v756; // [esp+1BCh] [ebp-1DCh] BYREF
  NiD3DTextureStage *v757; // [esp+1C0h] [ebp-1D8h] BYREF
  NiD3DTextureStage *v758; // [esp+1C4h] [ebp-1D4h] BYREF
  NiD3DTextureStage *v759; // [esp+1C8h] [ebp-1D0h] BYREF
  NiD3DTextureStage *v760; // [esp+1CCh] [ebp-1CCh] BYREF
  NiD3DTextureStage *v761; // [esp+1D0h] [ebp-1C8h] BYREF
  NiD3DTextureStage *v762; // [esp+1D4h] [ebp-1C4h] BYREF
  NiD3DTextureStage *v763; // [esp+1D8h] [ebp-1C0h] BYREF
  NiD3DTextureStage *v764; // [esp+1DCh] [ebp-1BCh] BYREF
  NiD3DTextureStage *v765; // [esp+1E0h] [ebp-1B8h] BYREF
  NiD3DTextureStage *v766; // [esp+1E4h] [ebp-1B4h] BYREF
  NiD3DTextureStage *v767; // [esp+1E8h] [ebp-1B0h] BYREF
  NiD3DTextureStage *v768; // [esp+1ECh] [ebp-1ACh] BYREF
  NiD3DTextureStage *v769; // [esp+1F0h] [ebp-1A8h] BYREF
  NiD3DTextureStage *v770; // [esp+1F4h] [ebp-1A4h] BYREF
  NiD3DTextureStage *v771; // [esp+1F8h] [ebp-1A0h] BYREF
  NiD3DTextureStage *v772; // [esp+1FCh] [ebp-19Ch] BYREF
  NiD3DTextureStage *v773; // [esp+200h] [ebp-198h] BYREF
  NiD3DTextureStage *v774; // [esp+204h] [ebp-194h] BYREF
  NiD3DTextureStage *v775; // [esp+208h] [ebp-190h] BYREF
  NiD3DTextureStage *v776; // [esp+20Ch] [ebp-18Ch] BYREF
  NiD3DTextureStage *v777; // [esp+210h] [ebp-188h] BYREF
  NiD3DTextureStage *v778; // [esp+214h] [ebp-184h] BYREF
  NiD3DTextureStage *v779; // [esp+218h] [ebp-180h] BYREF
  NiD3DTextureStage *v780; // [esp+21Ch] [ebp-17Ch] BYREF
  NiD3DTextureStage *v781; // [esp+220h] [ebp-178h] BYREF
  NiD3DTextureStage *v782; // [esp+224h] [ebp-174h] BYREF
  NiD3DTextureStage *v783; // [esp+228h] [ebp-170h] BYREF
  NiD3DTextureStage *v784; // [esp+22Ch] [ebp-16Ch] BYREF
  NiD3DTextureStage *v785; // [esp+230h] [ebp-168h] BYREF
  NiD3DTextureStage *v786; // [esp+234h] [ebp-164h] BYREF
  NiD3DTextureStage *v787; // [esp+238h] [ebp-160h] BYREF
  NiD3DTextureStage *v788; // [esp+23Ch] [ebp-15Ch] BYREF
  NiD3DTextureStage *v789; // [esp+240h] [ebp-158h] BYREF
  NiD3DTextureStage *v790; // [esp+244h] [ebp-154h] BYREF
  NiD3DTextureStage *v791; // [esp+248h] [ebp-150h] BYREF
  NiD3DTextureStage *v792; // [esp+24Ch] [ebp-14Ch] BYREF
  NiD3DTextureStage *v793; // [esp+250h] [ebp-148h] BYREF
  NiD3DTextureStage *v794; // [esp+254h] [ebp-144h] BYREF
  NiD3DTextureStage *v795; // [esp+258h] [ebp-140h] BYREF
  NiD3DTextureStage *v796; // [esp+25Ch] [ebp-13Ch] BYREF
  NiD3DTextureStage *v797; // [esp+260h] [ebp-138h] BYREF
  NiD3DTextureStage *v798; // [esp+264h] [ebp-134h] BYREF
  NiD3DTextureStage *v799; // [esp+268h] [ebp-130h] BYREF
  NiD3DTextureStage *v800; // [esp+26Ch] [ebp-12Ch] BYREF
  NiD3DTextureStage *v801; // [esp+270h] [ebp-128h] BYREF
  NiD3DTextureStage *v802; // [esp+274h] [ebp-124h] BYREF
  NiD3DTextureStage *v803; // [esp+278h] [ebp-120h] BYREF
  NiD3DTextureStage *v804; // [esp+27Ch] [ebp-11Ch] BYREF
  NiD3DTextureStage *v805; // [esp+280h] [ebp-118h] BYREF
  NiD3DTextureStage *v806; // [esp+284h] [ebp-114h] BYREF
  NiD3DTextureStage *v807; // [esp+288h] [ebp-110h] BYREF
  NiD3DTextureStage *v808; // [esp+28Ch] [ebp-10Ch] BYREF
  NiD3DTextureStage *v809; // [esp+290h] [ebp-108h] BYREF
  NiD3DTextureStage *v810; // [esp+294h] [ebp-104h] BYREF
  NiD3DTextureStage *v811; // [esp+298h] [ebp-100h] BYREF
  NiD3DTextureStage *v812; // [esp+29Ch] [ebp-FCh] BYREF
  NiD3DTextureStage *v813; // [esp+2A0h] [ebp-F8h] BYREF
  NiD3DTextureStage *v814; // [esp+2A4h] [ebp-F4h] BYREF
  NiD3DTextureStage *v815; // [esp+2A8h] [ebp-F0h] BYREF
  NiD3DTextureStage *v816; // [esp+2ACh] [ebp-ECh] BYREF
  NiD3DTextureStage *v817; // [esp+2B0h] [ebp-E8h] BYREF
  NiD3DTextureStage *v818; // [esp+2B4h] [ebp-E4h] BYREF
  NiD3DTextureStage *v819; // [esp+2B8h] [ebp-E0h] BYREF
  NiD3DTextureStage *v820; // [esp+2BCh] [ebp-DCh] BYREF
  NiD3DTextureStage *v821; // [esp+2C0h] [ebp-D8h] BYREF
  NiD3DTextureStage *v822; // [esp+2C4h] [ebp-D4h] BYREF
  NiD3DTextureStage *v823; // [esp+2C8h] [ebp-D0h] BYREF
  NiD3DTextureStage *v824; // [esp+2CCh] [ebp-CCh] BYREF
  NiD3DTextureStage *v825; // [esp+2D0h] [ebp-C8h] BYREF
  NiD3DTextureStage *v826; // [esp+2D4h] [ebp-C4h] BYREF
  NiD3DTextureStage *v827; // [esp+2D8h] [ebp-C0h] BYREF
  NiD3DTextureStage *v828; // [esp+2DCh] [ebp-BCh] BYREF
  NiD3DTextureStage *v829; // [esp+2E0h] [ebp-B8h] BYREF
  NiD3DTextureStage *v830; // [esp+2E4h] [ebp-B4h] BYREF
  NiD3DTextureStage *v831; // [esp+2E8h] [ebp-B0h] BYREF
  NiD3DTextureStage *v832; // [esp+2ECh] [ebp-ACh] BYREF
  NiD3DTextureStage *v833; // [esp+2F0h] [ebp-A8h] BYREF
  NiD3DTextureStage *v834; // [esp+2F4h] [ebp-A4h] BYREF
  NiD3DTextureStage *v835; // [esp+2F8h] [ebp-A0h] BYREF
  NiD3DTextureStage *v836; // [esp+2FCh] [ebp-9Ch] BYREF
  NiD3DTextureStage *v837; // [esp+300h] [ebp-98h] BYREF
  NiD3DTextureStage *v838; // [esp+304h] [ebp-94h] BYREF
  NiD3DTextureStage *v839; // [esp+308h] [ebp-90h] BYREF
  NiD3DTextureStage *v840; // [esp+30Ch] [ebp-8Ch] BYREF
  NiD3DTextureStage *v841; // [esp+310h] [ebp-88h] BYREF
  NiD3DTextureStage *v842; // [esp+314h] [ebp-84h] BYREF
  NiD3DTextureStage *v843; // [esp+318h] [ebp-80h] BYREF
  NiD3DTextureStage *v844; // [esp+31Ch] [ebp-7Ch] BYREF
  NiD3DTextureStage *v845; // [esp+320h] [ebp-78h] BYREF
  NiD3DTextureStage *v846; // [esp+324h] [ebp-74h] BYREF
  NiD3DTextureStage *v847; // [esp+328h] [ebp-70h] BYREF
  NiD3DTextureStage *v848; // [esp+32Ch] [ebp-6Ch] BYREF
  NiD3DTextureStage *v849; // [esp+330h] [ebp-68h] BYREF
  NiD3DTextureStage *v850; // [esp+334h] [ebp-64h] BYREF
  NiD3DTextureStage *v851; // [esp+338h] [ebp-60h] BYREF
  NiD3DTextureStage *v852; // [esp+33Ch] [ebp-5Ch] BYREF
  NiD3DTextureStage *v853; // [esp+340h] [ebp-58h] BYREF
  NiD3DTextureStage *v854; // [esp+344h] [ebp-54h] BYREF
  NiD3DTextureStage *v855; // [esp+348h] [ebp-50h] BYREF
  NiD3DTextureStage *v856; // [esp+34Ch] [ebp-4Ch] BYREF
  NiD3DTextureStage *v857; // [esp+350h] [ebp-48h] BYREF
  NiD3DTextureStage *v858; // [esp+354h] [ebp-44h] BYREF
  NiD3DTextureStage *v859; // [esp+358h] [ebp-40h] BYREF
  NiD3DTextureStage *v860; // [esp+35Ch] [ebp-3Ch] BYREF
  NiD3DTextureStage *v861; // [esp+360h] [ebp-38h] BYREF
  NiD3DTextureStage *v862; // [esp+364h] [ebp-34h] BYREF
  NiD3DTextureStage *v863; // [esp+368h] [ebp-30h] BYREF
  NiD3DTextureStage *v864; // [esp+36Ch] [ebp-2Ch] BYREF
  NiD3DTextureStage *v865; // [esp+370h] [ebp-28h] BYREF
  NiD3DTextureStage *v866; // [esp+374h] [ebp-24h] BYREF
  NiD3DTextureStage *v867; // [esp+378h] [ebp-20h] BYREF
  NiD3DTextureStage *v868; // [esp+37Ch] [ebp-1Ch] BYREF
  NiD3DTextureStage *v869; // [esp+380h] [ebp-18h] BYREF
  NiD3DTextureStage *v870; // [esp+384h] [ebp-14h] BYREF
  NiD3DTextureStage *v871; // [esp+388h] [ebp-10h] BYREF
  unsigned int v872; // [esp+394h] [ebp-4h]

  v0 = 0; /*0x820c2d*/
  v1 = 0; /*0x820c2f*/
  v651 = 0; /*0x820c31*/
  v872 = 0; /*0x820c35*/
  a3 = 0; /*0x820c3c*/
  v2 = unk_B45778; /*0x820c40*/
  v3 = unk_B45778 == 0; /*0x820c45*/
  LOBYTE(v872) = 1; /*0x820c4c*/
  if ( !v3 ) /*0x820c54*/
  {
    v0 = (NiD3DPass *)v2; /*0x820c56*/
    v651 = (NiD3DPassVtbl **)v2; /*0x820c5a*/
    if ( v2 ) /*0x820c5e*/
      ++*(_DWORD *)(v2 + 0x60); /*0x820c60*/
  }
  if ( v0->StageCount < 8 ) /*0x820c6c*/
  {
    v4 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v816); /*0x820c7a*/
    if ( *v4 ) /*0x820c82*/
    {
      v1 = (NiD3DTextureStage *)*v4; /*0x820c87*/
      a3 = *v4; /*0x820c8b*/
      if ( a3 ) /*0x820c8f*/
        ++v1[7].Unk08; /*0x820c91*/
    }
    v5 = v816; /*0x820c94*/
    LOBYTE(v872) = 1; /*0x820c9d*/
    if ( v816 ) /*0x820ca5*/
    {
      --v816[7].Unk08; /*0x820ca7*/
      if ( !v5[7].Unk08 ) /*0x820caf*/
        sub_772560(v5); /*0x820cb4*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x820cc0*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x820ccd*/
    v6 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v654); /*0x820cdf*/
    v3 = v1 == (NiD3DTextureStage *)*v6; /*0x820ce1*/
    LOBYTE(v872) = 3; /*0x820ce4*/
    if ( !v3 ) /*0x820cec*/
    {
      if ( v1 ) /*0x820cf0*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820cf2*/
        if ( v3 ) /*0x820cf5*/
          sub_772560(v1); /*0x820cf9*/
      }
      v1 = (NiD3DTextureStage *)*v6; /*0x820cfe*/
      a3 = *v6; /*0x820d03*/
      if ( a3 ) /*0x820d07*/
        ++v1[7].Unk08; /*0x820d09*/
    }
    v7 = v654; /*0x820d0d*/
    LOBYTE(v872) = 1; /*0x820d13*/
    if ( v654 ) /*0x820d1b*/
    {
      --v654[7].Unk08; /*0x820d1d*/
      if ( !v7[7].Unk08 ) /*0x820d25*/
        sub_772560(v7); /*0x820d2a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x820d36*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x820d43*/
    v8 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v844); /*0x820d58*/
    v3 = v1 == (NiD3DTextureStage *)*v8; /*0x820d5a*/
    LOBYTE(v872) = 4; /*0x820d5d*/
    if ( !v3 ) /*0x820d65*/
    {
      if ( v1 ) /*0x820d69*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820d6b*/
        if ( v3 ) /*0x820d6e*/
          sub_772560(v1); /*0x820d72*/
      }
      v1 = (NiD3DTextureStage *)*v8; /*0x820d77*/
      a3 = *v8; /*0x820d7c*/
      if ( a3 ) /*0x820d80*/
        ++v1[7].Unk08; /*0x820d82*/
    }
    v9 = v844; /*0x820d86*/
    LOBYTE(v872) = 1; /*0x820d8f*/
    if ( v844 ) /*0x820d97*/
    {
      --v844[7].Unk08; /*0x820d99*/
      if ( !v9[7].Unk08 ) /*0x820da1*/
        sub_772560(v9); /*0x820da6*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x820db2*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x820dbf*/
    v10 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v656); /*0x820dd1*/
    v3 = v1 == (NiD3DTextureStage *)*v10; /*0x820dd3*/
    LOBYTE(v872) = 5; /*0x820dd6*/
    if ( !v3 ) /*0x820dde*/
    {
      if ( v1 ) /*0x820de2*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820de4*/
        if ( v3 ) /*0x820de7*/
          sub_772560(v1); /*0x820deb*/
      }
      v1 = (NiD3DTextureStage *)*v10; /*0x820df0*/
      a3 = *v10; /*0x820df5*/
      if ( a3 ) /*0x820df9*/
        ++v1[7].Unk08; /*0x820dfb*/
    }
    v11 = v656; /*0x820dff*/
    LOBYTE(v872) = 1; /*0x820e05*/
    if ( v656 ) /*0x820e0d*/
    {
      --v656[7].Unk08; /*0x820e0f*/
      if ( !v11[7].Unk08 ) /*0x820e17*/
        sub_772560(v11); /*0x820e1c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x820e28*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x820e35*/
    v12 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v764); /*0x820e4a*/
    v3 = v1 == (NiD3DTextureStage *)*v12; /*0x820e4c*/
    LOBYTE(v872) = 6; /*0x820e4f*/
    if ( !v3 ) /*0x820e57*/
    {
      if ( v1 ) /*0x820e5b*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820e5d*/
        if ( v3 ) /*0x820e60*/
          sub_772560(v1); /*0x820e64*/
      }
      v1 = (NiD3DTextureStage *)*v12; /*0x820e69*/
      a3 = *v12; /*0x820e6e*/
      if ( a3 ) /*0x820e72*/
        ++v1[7].Unk08; /*0x820e74*/
    }
    v13 = v764; /*0x820e78*/
    LOBYTE(v872) = 1; /*0x820e81*/
    if ( v764 ) /*0x820e89*/
    {
      --v764[7].Unk08; /*0x820e8b*/
      if ( !v13[7].Unk08 ) /*0x820e93*/
        sub_772560(v13); /*0x820e98*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 1, 2); /*0x820ea4*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x820eb1*/
    v14 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v658); /*0x820ec3*/
    v3 = v1 == (NiD3DTextureStage *)*v14; /*0x820ec5*/
    LOBYTE(v872) = 7; /*0x820ec8*/
    if ( !v3 ) /*0x820ed0*/
    {
      if ( v1 ) /*0x820ed4*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820ed6*/
        if ( v3 ) /*0x820ed9*/
          sub_772560(v1); /*0x820edd*/
      }
      v1 = (NiD3DTextureStage *)*v14; /*0x820ee2*/
      a3 = *v14; /*0x820ee7*/
      if ( a3 ) /*0x820eeb*/
        ++v1[7].Unk08; /*0x820eed*/
    }
    v15 = v658; /*0x820ef1*/
    LOBYTE(v872) = 1; /*0x820ef7*/
    if ( v658 ) /*0x820eff*/
    {
      --v658[7].Unk08; /*0x820f01*/
      if ( !v15[7].Unk08 ) /*0x820f09*/
        sub_772560(v15); /*0x820f0e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 3, 0); /*0x820f1a*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x820f2a*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x820f34*/
    v16 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v818); /*0x820f49*/
    v3 = v1 == (NiD3DTextureStage *)*v16; /*0x820f4b*/
    LOBYTE(v872) = 8; /*0x820f4e*/
    if ( !v3 ) /*0x820f56*/
    {
      if ( v1 ) /*0x820f5a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820f5c*/
        if ( v3 ) /*0x820f5f*/
          sub_772560(v1); /*0x820f63*/
      }
      v1 = (NiD3DTextureStage *)*v16; /*0x820f68*/
      a3 = *v16; /*0x820f6d*/
      if ( a3 ) /*0x820f71*/
        ++v1[7].Unk08; /*0x820f73*/
    }
    v17 = v818; /*0x820f77*/
    LOBYTE(v872) = 1; /*0x820f80*/
    if ( v818 ) /*0x820f88*/
    {
      --v818[7].Unk08; /*0x820f8a*/
      if ( !v17[7].Unk08 ) /*0x820f92*/
        sub_772560(v17); /*0x820f97*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 1, 2); /*0x820fa3*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x820fb0*/
    v18 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v660); /*0x820fc2*/
    v3 = v1 == (NiD3DTextureStage *)*v18; /*0x820fc4*/
    LOBYTE(v872) = 9; /*0x820fc7*/
    if ( !v3 ) /*0x820fcf*/
    {
      if ( v1 ) /*0x820fd3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820fd5*/
        if ( v3 ) /*0x820fd8*/
          sub_772560(v1); /*0x820fdc*/
      }
      v1 = (NiD3DTextureStage *)*v18; /*0x820fe1*/
      a3 = *v18; /*0x820fe6*/
      if ( a3 ) /*0x820fea*/
        ++v1[7].Unk08; /*0x820fec*/
    }
    v19 = v660; /*0x820ff0*/
    LOBYTE(v872) = 1; /*0x820ff6*/
    if ( v660 ) /*0x820ffe*/
    {
      --v660[7].Unk08; /*0x821000*/
      if ( !v19[7].Unk08 ) /*0x821008*/
        sub_772560(v19); /*0x82100d*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 7, 3, 0); /*0x821019*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x821026*/
  }
  VertexShader = v0->VertexShader; /*0x821031*/
  v21 = (int)dword_B45364; /*0x821036*/
  if ( VertexShader != dword_B45364 ) /*0x821038*/
  {
    if ( VertexShader ) /*0x82103c*/
    {
      v22 = v0->VertexShader; /*0x82103e*/
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x821044*/
      {
        if ( v22 ) /*0x821050*/
          (**(void (__thiscall ***)(NiD3DVertexShader *, int))v22)(v22, 1); /*0x82105b*/
      }
    }
    v0->VertexShader = (NiD3DVertexShader *)v21; /*0x82105f*/
    if ( v21 ) /*0x821062*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x821068*/
  }
  PixelShader = v0->PixelShader; /*0x821074*/
  v24 = (int)dword_B45144; /*0x821079*/
  if ( PixelShader != dword_B45144 ) /*0x82107b*/
  {
    if ( PixelShader ) /*0x82107f*/
    {
      v25 = v0->PixelShader; /*0x821081*/
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x821087*/
      {
        if ( v25 ) /*0x821093*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1); /*0x82109e*/
      }
    }
    v0->PixelShader = (NiD3DPixelShader *)v24; /*0x8210a2*/
    if ( v24 ) /*0x8210a5*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x8210ab*/
  }
  if ( !v0->RenderStateGroup ) /*0x8210b3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8210bd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8210c7*/
  if ( !v0->RenderStateGroup ) /*0x8210cc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8210d6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8210e0*/
  if ( !v0->RenderStateGroup ) /*0x8210e5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8210ef*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8210fa*/
  if ( !v0->RenderStateGroup ) /*0x8210ff*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821109*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x821114*/
  if ( !v0->RenderStateGroup ) /*0x821119*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821123*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82112e*/
  if ( !v0->RenderStateGroup ) /*0x821133*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82113d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x821147*/
  v3 = v0 == (NiD3DPass *)unk_B45B8C; /*0x82114c*/
  unk_B43CF8 = 0x18082; /*0x821157*/
  unk_B44388 = 0x10C; /*0x821161*/
  unk_B43668 = 0x18000; /*0x821167*/
  unk_B44A18 = 8; /*0x821171*/
  if ( !v3 ) /*0x82117b*/
  {
    v3 = v0->RefCount-- == 1; /*0x82117d*/
    if ( v3 ) /*0x821181*/
      NiD3DPass_ReleaseToPool(v0); /*0x821185*/
    v0 = (NiD3DPass *)unk_B45B8C; /*0x82118a*/
    v651 = (NiD3DPassVtbl **)unk_B45B8C; /*0x821192*/
    if ( v651 ) /*0x821196*/
      ++v0->RefCount; /*0x821198*/
  }
  if ( v0->StageCount < 8 ) /*0x8211a2*/
  {
    v26 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v766); /*0x8211b8*/
    v3 = v1 == (NiD3DTextureStage *)*v26; /*0x8211ba*/
    LOBYTE(v872) = 0xA; /*0x8211bd*/
    if ( !v3 ) /*0x8211c5*/
    {
      if ( v1 ) /*0x8211c9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8211cb*/
        if ( v3 ) /*0x8211cf*/
          sub_772560(v1); /*0x8211d3*/
      }
      v1 = (NiD3DTextureStage *)*v26; /*0x8211d8*/
      a3 = *v26; /*0x8211dd*/
      if ( a3 ) /*0x8211e1*/
        ++v1[7].Unk08; /*0x8211e3*/
    }
    v27 = v766; /*0x8211e7*/
    LOBYTE(v872) = 1; /*0x8211f0*/
    if ( v766 ) /*0x8211f8*/
    {
      --v766[7].Unk08; /*0x8211fa*/
      if ( !v27[7].Unk08 ) /*0x821203*/
        sub_772560(v27); /*0x821207*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 3, 2); /*0x821212*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82121e*/
    v28 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v662); /*0x821230*/
    v3 = v1 == (NiD3DTextureStage *)*v28; /*0x821232*/
    LOBYTE(v872) = 0xB; /*0x821235*/
    if ( !v3 ) /*0x82123d*/
    {
      if ( v1 ) /*0x821241*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x821243*/
        if ( v3 ) /*0x821247*/
          sub_772560(v1); /*0x82124b*/
      }
      v1 = (NiD3DTextureStage *)*v28; /*0x821250*/
      a3 = *v28; /*0x821255*/
      if ( a3 ) /*0x821259*/
        ++v1[7].Unk08; /*0x82125b*/
    }
    v29 = v662; /*0x82125f*/
    LOBYTE(v872) = 1; /*0x821265*/
    if ( v662 ) /*0x82126d*/
    {
      --v662[7].Unk08; /*0x82126f*/
      if ( !v29[7].Unk08 ) /*0x821278*/
        sub_772560(v29); /*0x82127c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x821288*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x821295*/
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v858); /*0x8212aa*/
    v3 = v1 == (NiD3DTextureStage *)*v30; /*0x8212ac*/
    LOBYTE(v872) = 0xC; /*0x8212af*/
    if ( !v3 ) /*0x8212b7*/
    {
      if ( v1 ) /*0x8212bb*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8212bd*/
        if ( v3 ) /*0x8212c1*/
          sub_772560(v1); /*0x8212c5*/
      }
      v1 = (NiD3DTextureStage *)*v30; /*0x8212ca*/
      a3 = *v30; /*0x8212cf*/
      if ( a3 ) /*0x8212d3*/
        ++v1[7].Unk08; /*0x8212d5*/
    }
    v31 = v858; /*0x8212d9*/
    LOBYTE(v872) = 1; /*0x8212e2*/
    if ( v858 ) /*0x8212ea*/
    {
      --v858[7].Unk08; /*0x8212ec*/
      if ( !v31[7].Unk08 ) /*0x8212f5*/
        sub_772560(v31); /*0x8212f9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x821305*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x821312*/
    v32 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v664); /*0x82131c*/
    LOBYTE(v872) = 0xD; /*0x821329*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v32); /*0x821331*/
    v33 = v664; /*0x821336*/
    LOBYTE(v872) = 1; /*0x82133c*/
    if ( v664 ) /*0x821344*/
    {
      --v664[7].Unk08; /*0x821346*/
      if ( !v33[7].Unk08 ) /*0x82134f*/
        sub_772560(v33); /*0x821353*/
    }
    v34 = a3; /*0x821358*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x821363*/
    NiD3DPass_SetTextureStage(v0, 3u, v34); /*0x821370*/
    v35 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v768); /*0x82137d*/
    LOBYTE(v872) = 0xE; /*0x82138a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v35); /*0x821392*/
    v36 = v768; /*0x821397*/
    LOBYTE(v872) = 1; /*0x8213a0*/
    if ( v768 ) /*0x8213a8*/
    {
      --v768[7].Unk08; /*0x8213aa*/
      if ( !v36[7].Unk08 ) /*0x8213b3*/
        sub_772560(v36); /*0x8213b7*/
    }
    v37 = a3; /*0x8213bc*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8213c7*/
    NiD3DPass_SetTextureStage(v0, 4u, v37); /*0x8213d4*/
    v38 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v666); /*0x8213de*/
    LOBYTE(v872) = 0xF; /*0x8213eb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v38); /*0x8213f3*/
    v39 = v666; /*0x8213f8*/
    LOBYTE(v872) = 1; /*0x8213fe*/
    if ( v666 ) /*0x821406*/
    {
      --v666[7].Unk08; /*0x821408*/
      if ( !v39[7].Unk08 ) /*0x821411*/
        sub_772560(v39); /*0x821415*/
    }
    v40 = (NiD3DTextureStage *)a3; /*0x82141a*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x821424*/
    NiD3DTextureStage_SetTexture(v40, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x821435*/
    NiD3DPass_SetTextureStage(v0, 5u, &v40->Stage); /*0x82143f*/
    v41 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v820); /*0x82144c*/
    LOBYTE(v872) = 0x10; /*0x821459*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v41); /*0x821461*/
    v42 = v820; /*0x821466*/
    LOBYTE(v872) = 1; /*0x82146f*/
    if ( v820 ) /*0x821477*/
    {
      --v820[7].Unk08; /*0x821479*/
      if ( !v42[7].Unk08 ) /*0x821482*/
        sub_772560(v42); /*0x821486*/
    }
    v43 = a3; /*0x82148b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x821496*/
    NiD3DPass_SetTextureStage(v0, 6u, v43); /*0x8214a3*/
    v44 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v668); /*0x8214ad*/
    LOBYTE(v872) = 0x11; /*0x8214ba*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v44); /*0x8214c2*/
    v45 = v668; /*0x8214c7*/
    LOBYTE(v872) = 1; /*0x8214cd*/
    if ( v668 ) /*0x8214d5*/
    {
      --v668[7].Unk08; /*0x8214d7*/
      if ( !v45[7].Unk08 ) /*0x8214e0*/
        sub_772560(v45); /*0x8214e4*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8214e9*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8214f3*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x821500*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4537C); /*0x821513*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B4515C); /*0x821521*/
  if ( !v0->RenderStateGroup ) /*0x821526*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821530*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82153a*/
  if ( !v0->RenderStateGroup ) /*0x82153f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821549*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x821553*/
  if ( !v0->RenderStateGroup ) /*0x821558*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821562*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82156d*/
  if ( !v0->RenderStateGroup ) /*0x821572*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82157c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x821587*/
  if ( !v0->RenderStateGroup ) /*0x82158c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821596*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8215a1*/
  if ( !v0->RenderStateGroup ) /*0x8215a6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8215b0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8215ba*/
  v3 = v0 == (NiD3DPass *)unk_B4577C; /*0x8215bf*/
  unk_B4410C = 0x18082; /*0x8215c5*/
  unk_B4479C = 0x10C; /*0x8215cf*/
  unk_B43A7C = 0x18000; /*0x8215d5*/
  unk_B44E2C = 0x108; /*0x8215df*/
  if ( !v3 ) /*0x8215e9*/
  {
    v3 = v0->RefCount-- == 1; /*0x8215eb*/
    if ( v3 ) /*0x8215ef*/
      NiD3DPass_ReleaseToPool(v0); /*0x8215f3*/
    v0 = (NiD3DPass *)unk_B4577C; /*0x8215f8*/
    v651 = (NiD3DPassVtbl **)unk_B4577C; /*0x821600*/
    if ( v651 ) /*0x821604*/
      ++v0->RefCount; /*0x821606*/
  }
  if ( v0->StageCount < 8 ) /*0x82160e*/
  {
    v46 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v770); /*0x82161c*/
    LOBYTE(v872) = 0x12; /*0x821629*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v46); /*0x821631*/
    v47 = v770; /*0x821636*/
    LOBYTE(v872) = 1; /*0x82163f*/
    if ( v770 ) /*0x821647*/
    {
      --v770[7].Unk08; /*0x821649*/
      if ( !v47[7].Unk08 ) /*0x821652*/
        sub_772560(v47); /*0x821656*/
    }
    v48 = a3; /*0x82165b*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x821665*/
    NiD3DPass_SetTextureStage(v0, 0, v48); /*0x821671*/
    v49 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v670); /*0x82167b*/
    LOBYTE(v872) = 0x13; /*0x821688*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v49); /*0x821690*/
    v50 = v670; /*0x821695*/
    LOBYTE(v872) = 1; /*0x82169b*/
    if ( v670 ) /*0x8216a3*/
    {
      --v670[7].Unk08; /*0x8216a5*/
      if ( !v50[7].Unk08 ) /*0x8216ae*/
        sub_772560(v50); /*0x8216b2*/
    }
    v51 = a3; /*0x8216b7*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8216c2*/
    NiD3DPass_SetTextureStage(v0, 1u, v51); /*0x8216cf*/
    v52 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v846); /*0x8216dc*/
    LOBYTE(v872) = 0x14; /*0x8216e9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v52); /*0x8216f1*/
    v53 = v846; /*0x8216f6*/
    LOBYTE(v872) = 1; /*0x8216ff*/
    if ( v846 ) /*0x821707*/
    {
      --v846[7].Unk08; /*0x821709*/
      if ( !v53[7].Unk08 ) /*0x821712*/
        sub_772560(v53); /*0x821716*/
    }
    v54 = a3; /*0x82171b*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x821726*/
    NiD3DPass_SetTextureStage(v0, 2u, v54); /*0x821733*/
    v55 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v672); /*0x82173d*/
    LOBYTE(v872) = 0x15; /*0x82174a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v55); /*0x821752*/
    v56 = v672; /*0x821757*/
    LOBYTE(v872) = 1; /*0x82175d*/
    if ( v672 ) /*0x821765*/
    {
      --v672[7].Unk08; /*0x821767*/
      if ( !v56[7].Unk08 ) /*0x821770*/
        sub_772560(v56); /*0x821774*/
    }
    v57 = a3; /*0x821779*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x821784*/
    NiD3DPass_SetTextureStage(v0, 3u, v57); /*0x821791*/
    v58 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v772); /*0x82179e*/
    LOBYTE(v872) = 0x16; /*0x8217ab*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v58); /*0x8217b3*/
    v59 = v772; /*0x8217b8*/
    LOBYTE(v872) = 1; /*0x8217c1*/
    if ( v772 ) /*0x8217c9*/
    {
      --v772[7].Unk08; /*0x8217cb*/
      if ( !v59[7].Unk08 ) /*0x8217d4*/
        sub_772560(v59); /*0x8217d8*/
    }
    v60 = a3; /*0x8217dd*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8217e8*/
    NiD3DPass_SetTextureStage(v0, 4u, v60); /*0x8217f5*/
    v61 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v674); /*0x8217ff*/
    LOBYTE(v872) = 0x17; /*0x82180c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v61); /*0x821814*/
    v62 = v674; /*0x821819*/
    LOBYTE(v872) = 1; /*0x82181f*/
    if ( v674 ) /*0x821827*/
    {
      --v674[7].Unk08; /*0x821829*/
      if ( !v62[7].Unk08 ) /*0x821832*/
        sub_772560(v62); /*0x821836*/
    }
    v63 = (NiD3DTextureStage *)a3; /*0x82183b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x821845*/
    NiD3DTextureStage_SetTexture(v63, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x821855*/
    NiD3DPass_SetTextureStage(v0, 5u, &v63->Stage); /*0x82185f*/
    v64 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v822); /*0x82186c*/
    LOBYTE(v872) = 0x18; /*0x821879*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v64); /*0x821881*/
    v65 = v822; /*0x821886*/
    LOBYTE(v872) = 1; /*0x82188f*/
    if ( v822 ) /*0x821897*/
    {
      --v822[7].Unk08; /*0x821899*/
      if ( !v65[7].Unk08 ) /*0x8218a2*/
        sub_772560(v65); /*0x8218a6*/
    }
    v66 = a3; /*0x8218ab*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8218b6*/
    NiD3DPass_SetTextureStage(v0, 6u, v66); /*0x8218c3*/
    v67 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v676); /*0x8218cd*/
    LOBYTE(v872) = 0x19; /*0x8218da*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v67); /*0x8218e2*/
    v68 = v676; /*0x8218e7*/
    LOBYTE(v872) = 1; /*0x8218ed*/
    if ( v676 ) /*0x8218f5*/
    {
      --v676[7].Unk08; /*0x8218f7*/
      if ( !v68[7].Unk08 ) /*0x821900*/
        sub_772560(v68); /*0x821904*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x821909*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x821913*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x821920*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45368); /*0x82192d*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45148); /*0x82193b*/
  if ( !v0->RenderStateGroup ) /*0x821940*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82194a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x821954*/
  if ( !v0->RenderStateGroup ) /*0x821959*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821963*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82196d*/
  if ( !v0->RenderStateGroup ) /*0x821972*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82197c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x821987*/
  if ( !v0->RenderStateGroup ) /*0x82198c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821996*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8219a1*/
  if ( !v0->RenderStateGroup ) /*0x8219a6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8219b0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8219bb*/
  if ( !v0->RenderStateGroup ) /*0x8219c0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8219ca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8219d4*/
  v3 = v0 == (NiD3DPass *)unk_B45780; /*0x8219d9*/
  unk_B43CFC = 0xA018086; /*0x8219df*/
  unk_B4438C = 0x10C; /*0x8219e9*/
  unk_B4366C = 0xA018084; /*0x8219ef*/
  unk_B44A1C = 0x10C; /*0x8219f9*/
  if ( !v3 ) /*0x8219ff*/
  {
    v3 = v0->RefCount-- == 1; /*0x821a01*/
    if ( v3 ) /*0x821a05*/
      NiD3DPass_ReleaseToPool(v0); /*0x821a09*/
    v0 = (NiD3DPass *)unk_B45780; /*0x821a0e*/
    v651 = (NiD3DPassVtbl **)unk_B45780; /*0x821a16*/
    if ( v651 ) /*0x821a1a*/
      ++v0->RefCount; /*0x821a1c*/
  }
  if ( v0->StageCount < 8 ) /*0x821a24*/
  {
    v69 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v774); /*0x821a32*/
    LOBYTE(v872) = 0x1A; /*0x821a3f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v69); /*0x821a47*/
    v70 = v774; /*0x821a4c*/
    LOBYTE(v872) = 1; /*0x821a55*/
    if ( v774 ) /*0x821a5d*/
    {
      --v774[7].Unk08; /*0x821a5f*/
      if ( !v70[7].Unk08 ) /*0x821a68*/
        sub_772560(v70); /*0x821a6c*/
    }
    v71 = a3; /*0x821a71*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x821a7b*/
    NiD3DPass_SetTextureStage(v0, 0, v71); /*0x821a87*/
    v72 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v678); /*0x821a94*/
    LOBYTE(v872) = 0x1B; /*0x821aa1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v72); /*0x821aa9*/
    v73 = v678; /*0x821aae*/
    LOBYTE(v872) = 1; /*0x821ab7*/
    if ( v678 ) /*0x821abf*/
    {
      --v678[7].Unk08; /*0x821ac1*/
      if ( !v73[7].Unk08 ) /*0x821aca*/
        sub_772560(v73); /*0x821ace*/
    }
    v74 = a3; /*0x821ad3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x821ade*/
    NiD3DPass_SetTextureStage(v0, 1u, v74); /*0x821aeb*/
    v75 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v868); /*0x821af8*/
    LOBYTE(v872) = 0x1C; /*0x821b05*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v75); /*0x821b0d*/
    v76 = v868; /*0x821b12*/
    LOBYTE(v872) = 1; /*0x821b1b*/
    if ( v868 ) /*0x821b23*/
    {
      --v868[7].Unk08; /*0x821b25*/
      if ( !v76[7].Unk08 ) /*0x821b2e*/
        sub_772560(v76); /*0x821b32*/
    }
    v77 = a3; /*0x821b37*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x821b42*/
    NiD3DPass_SetTextureStage(v0, 2u, v77); /*0x821b4f*/
    v78 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v680); /*0x821b5c*/
    LOBYTE(v872) = 0x1D; /*0x821b69*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v78); /*0x821b71*/
    v79 = v680; /*0x821b76*/
    LOBYTE(v872) = 1; /*0x821b7f*/
    if ( v680 ) /*0x821b87*/
    {
      --v680[7].Unk08; /*0x821b89*/
      if ( !v79[7].Unk08 ) /*0x821b92*/
        sub_772560(v79); /*0x821b96*/
    }
    v80 = a3; /*0x821b9b*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x821ba6*/
    NiD3DPass_SetTextureStage(v0, 3u, v80); /*0x821bb3*/
    v81 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v776); /*0x821bc0*/
    LOBYTE(v872) = 0x1E; /*0x821bcd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v81); /*0x821bd5*/
    v82 = v776; /*0x821bda*/
    LOBYTE(v872) = 1; /*0x821be3*/
    if ( v776 ) /*0x821beb*/
    {
      --v776[7].Unk08; /*0x821bed*/
      if ( !v82[7].Unk08 ) /*0x821bf6*/
        sub_772560(v82); /*0x821bfa*/
    }
    v83 = a3; /*0x821bff*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x821c0a*/
    NiD3DPass_SetTextureStage(v0, 4u, v83); /*0x821c17*/
    v84 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v682); /*0x821c24*/
    LOBYTE(v872) = 0x1F; /*0x821c31*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v84); /*0x821c39*/
    v85 = v682; /*0x821c3e*/
    LOBYTE(v872) = 1; /*0x821c47*/
    if ( v682 ) /*0x821c4f*/
    {
      --v682[7].Unk08; /*0x821c51*/
      if ( !v85[7].Unk08 ) /*0x821c5a*/
        sub_772560(v85); /*0x821c5e*/
    }
    v86 = (NiD3DTextureStage *)a3; /*0x821c63*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x821c6d*/
    NiD3DTextureStage_SetTexture(v86, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x821c7e*/
    NiD3DPass_SetTextureStage(v0, 5u, &v86->Stage); /*0x821c88*/
    v87 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v824); /*0x821c95*/
    LOBYTE(v872) = 0x20; /*0x821ca2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v87); /*0x821caa*/
    v88 = v824; /*0x821caf*/
    LOBYTE(v872) = 1; /*0x821cb8*/
    if ( v824 ) /*0x821cc0*/
    {
      --v824[7].Unk08; /*0x821cc2*/
      if ( !v88[7].Unk08 ) /*0x821ccb*/
        sub_772560(v88); /*0x821ccf*/
    }
    v89 = a3; /*0x821cd4*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x821cdf*/
    NiD3DPass_SetTextureStage(v0, 6u, v89); /*0x821cec*/
    v90 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v684); /*0x821cf9*/
    LOBYTE(v872) = 0x21; /*0x821d06*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v90); /*0x821d0e*/
    v91 = v684; /*0x821d13*/
    LOBYTE(v872) = 1; /*0x821d1c*/
    if ( v684 ) /*0x821d24*/
    {
      --v684[7].Unk08; /*0x821d26*/
      if ( !v91[7].Unk08 ) /*0x821d2f*/
        sub_772560(v91); /*0x821d33*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x821d38*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x821d42*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x821d4f*/
  }
  NiD3DPass_SetVertexShader(v0, dword_B45364); /*0x821d5d*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B4514C); /*0x821d6a*/
  if ( !v0->RenderStateGroup ) /*0x821d6f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821d79*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x821d83*/
  if ( !v0->RenderStateGroup ) /*0x821d88*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821d92*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x821d9c*/
  if ( !v0->RenderStateGroup ) /*0x821da1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821dab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x821db6*/
  if ( !v0->RenderStateGroup ) /*0x821dbb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821dc5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x821dd0*/
  if ( !v0->RenderStateGroup ) /*0x821dd5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821ddf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x821dea*/
  if ( !v0->RenderStateGroup ) /*0x821def*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x821df9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x821e03*/
  v3 = v0 == (NiD3DPass *)unk_B45790; /*0x821e08*/
  unk_B43D00 = 0x18082; /*0x821e13*/
  unk_B44390 = 0x18C; /*0x821e1d*/
  unk_B43670 = 0x18000; /*0x821e23*/
  unk_B44A20 = 0xC; /*0x821e2d*/
  if ( !v3 ) /*0x821e37*/
  {
    v3 = v0->RefCount-- == 1; /*0x821e39*/
    if ( v3 ) /*0x821e3d*/
      NiD3DPass_ReleaseToPool(v0); /*0x821e41*/
    v0 = (NiD3DPass *)unk_B45790; /*0x821e46*/
    v651 = (NiD3DPassVtbl **)unk_B45790; /*0x821e4e*/
    if ( v651 ) /*0x821e52*/
      ++v0->RefCount; /*0x821e54*/
  }
  if ( v0->StageCount < 8 ) /*0x821e5c*/
  {
    v92 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v778); /*0x821e6a*/
    LOBYTE(v872) = 0x22; /*0x821e77*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v92); /*0x821e7f*/
    v93 = v778; /*0x821e84*/
    LOBYTE(v872) = 1; /*0x821e8d*/
    if ( v778 ) /*0x821e95*/
    {
      --v778[7].Unk08; /*0x821e97*/
      if ( !v93[7].Unk08 ) /*0x821ea0*/
        sub_772560(v93); /*0x821ea4*/
    }
    v94 = a3; /*0x821ea9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x821eb3*/
    NiD3DPass_SetTextureStage(v0, 0, v94); /*0x821ebf*/
    v95 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v686); /*0x821ecc*/
    LOBYTE(v872) = 0x23; /*0x821ed9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v95); /*0x821ee1*/
    v96 = v686; /*0x821ee6*/
    LOBYTE(v872) = 1; /*0x821eef*/
    if ( v686 ) /*0x821ef7*/
    {
      --v686[7].Unk08; /*0x821ef9*/
      if ( !v96[7].Unk08 ) /*0x821f02*/
        sub_772560(v96); /*0x821f06*/
    }
    v97 = a3; /*0x821f0b*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x821f16*/
    NiD3DPass_SetTextureStage(v0, 1u, v97); /*0x821f23*/
    v98 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v848); /*0x821f30*/
    LOBYTE(v872) = 0x24; /*0x821f3d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v98); /*0x821f45*/
    v99 = v848; /*0x821f4a*/
    LOBYTE(v872) = 1; /*0x821f53*/
    if ( v848 ) /*0x821f5b*/
    {
      --v848[7].Unk08; /*0x821f5d*/
      if ( !v99[7].Unk08 ) /*0x821f66*/
        sub_772560(v99); /*0x821f6a*/
    }
    v100 = a3; /*0x821f6f*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x821f7a*/
    NiD3DPass_SetTextureStage(v0, 2u, v100); /*0x821f87*/
    v101 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v688); /*0x821f94*/
    LOBYTE(v872) = 0x25; /*0x821fa1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v101); /*0x821fa9*/
    v102 = v688; /*0x821fae*/
    LOBYTE(v872) = 1; /*0x821fb7*/
    if ( v688 ) /*0x821fbf*/
    {
      --v688[7].Unk08; /*0x821fc1*/
      if ( !v102[7].Unk08 ) /*0x821fca*/
        sub_772560(v102); /*0x821fce*/
    }
    v103 = a3; /*0x821fd3*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x821fde*/
    NiD3DPass_SetTextureStage(v0, 3u, v103); /*0x821feb*/
    v104 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v780); /*0x821ff8*/
    LOBYTE(v872) = 0x26; /*0x822005*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v104); /*0x82200d*/
    v105 = v780; /*0x822012*/
    LOBYTE(v872) = 1; /*0x82201b*/
    if ( v780 ) /*0x822023*/
    {
      --v780[7].Unk08; /*0x822025*/
      if ( !v105[7].Unk08 ) /*0x82202e*/
        sub_772560(v105); /*0x822032*/
    }
    v106 = a3; /*0x822037*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x822042*/
    NiD3DPass_SetTextureStage(v0, 4u, v106); /*0x82204f*/
    v107 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v690); /*0x82205c*/
    LOBYTE(v872) = 0x27; /*0x822069*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v107); /*0x822071*/
    v108 = v690; /*0x822076*/
    LOBYTE(v872) = 1; /*0x82207f*/
    if ( v690 ) /*0x822087*/
    {
      --v690[7].Unk08; /*0x822089*/
      if ( !v108[7].Unk08 ) /*0x822092*/
        sub_772560(v108); /*0x822096*/
    }
    v109 = (NiD3DTextureStage *)a3; /*0x82209b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8220a5*/
    NiD3DTextureStage_SetTexture(v109, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8220b6*/
    NiD3DPass_SetTextureStage(v0, 5u, &v109->Stage); /*0x8220c0*/
    v110 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v826); /*0x8220cd*/
    LOBYTE(v872) = 0x28; /*0x8220da*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v110); /*0x8220e2*/
    v111 = v826; /*0x8220e7*/
    LOBYTE(v872) = 1; /*0x8220f0*/
    if ( v826 ) /*0x8220f8*/
    {
      --v826[7].Unk08; /*0x8220fa*/
      if ( !v111[7].Unk08 ) /*0x822103*/
        sub_772560(v111); /*0x822107*/
    }
    v112 = a3; /*0x82210c*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x822117*/
    NiD3DPass_SetTextureStage(v0, 6u, v112); /*0x822124*/
    v113 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v692); /*0x822131*/
    LOBYTE(v872) = 0x29; /*0x82213e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v113); /*0x822146*/
    v114 = v692; /*0x82214b*/
    LOBYTE(v872) = 1; /*0x822154*/
    if ( v692 ) /*0x82215c*/
    {
      --v692[7].Unk08; /*0x82215e*/
      if ( !v114[7].Unk08 ) /*0x822167*/
        sub_772560(v114); /*0x82216b*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x822170*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82217a*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x822187*/
  }
  NiD3DPass_SetVertexShader(v0, dword_B45364); /*0x822195*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45160); /*0x8221a3*/
  if ( !v0->RenderStateGroup ) /*0x8221a8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8221b2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8221bc*/
  if ( !v0->RenderStateGroup ) /*0x8221c1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8221cb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8221d5*/
  if ( !v0->RenderStateGroup ) /*0x8221da*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8221e4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8221ef*/
  if ( !v0->RenderStateGroup ) /*0x8221f4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8221fe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x822209*/
  if ( !v0->RenderStateGroup ) /*0x82220e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822218*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x822223*/
  if ( !v0->RenderStateGroup ) /*0x822228*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822232*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82223c*/
  v3 = v0 == (NiD3DPass *)unk_B45794; /*0x822241*/
  unk_B43D10 = 0x18082; /*0x822247*/
  unk_B443A0 = 0x18C; /*0x822251*/
  unk_B43680 = 0x18000; /*0x822257*/
  unk_B44A30 = 0xC; /*0x822261*/
  if ( !v3 ) /*0x82226b*/
  {
    v3 = v0->RefCount-- == 1; /*0x82226d*/
    if ( v3 ) /*0x822271*/
      NiD3DPass_ReleaseToPool(v0); /*0x822275*/
    v0 = (NiD3DPass *)unk_B45794; /*0x82227a*/
    v651 = (NiD3DPassVtbl **)unk_B45794; /*0x822282*/
    if ( v651 ) /*0x822286*/
      ++v0->RefCount; /*0x822288*/
  }
  if ( v0->StageCount < 8 ) /*0x822290*/
  {
    v115 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v782); /*0x82229e*/
    LOBYTE(v872) = 0x2A; /*0x8222ab*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v115); /*0x8222b3*/
    v116 = v782; /*0x8222b8*/
    LOBYTE(v872) = 1; /*0x8222c1*/
    if ( v782 ) /*0x8222c9*/
    {
      --v782[7].Unk08; /*0x8222cb*/
      if ( !v116[7].Unk08 ) /*0x8222d4*/
        sub_772560(v116); /*0x8222d8*/
    }
    v117 = a3; /*0x8222dd*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8222e7*/
    NiD3DPass_SetTextureStage(v0, 0, v117); /*0x8222f3*/
    v118 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v694); /*0x822300*/
    LOBYTE(v872) = 0x2B; /*0x82230d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v118); /*0x822315*/
    v119 = v694; /*0x82231a*/
    LOBYTE(v872) = 1; /*0x822323*/
    if ( v694 ) /*0x82232b*/
    {
      --v694[7].Unk08; /*0x82232d*/
      if ( !v119[7].Unk08 ) /*0x822336*/
        sub_772560(v119); /*0x82233a*/
    }
    v120 = a3; /*0x82233f*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82234a*/
    NiD3DPass_SetTextureStage(v0, 1u, v120); /*0x822357*/
    v121 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v860); /*0x822364*/
    LOBYTE(v872) = 0x2C; /*0x822371*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v121); /*0x822379*/
    v122 = v860; /*0x82237e*/
    LOBYTE(v872) = 1; /*0x822387*/
    if ( v860 ) /*0x82238f*/
    {
      --v860[7].Unk08; /*0x822391*/
      if ( !v122[7].Unk08 ) /*0x82239a*/
        sub_772560(v122); /*0x82239e*/
    }
    v123 = a3; /*0x8223a3*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8223ae*/
    NiD3DPass_SetTextureStage(v0, 2u, v123); /*0x8223bb*/
    v124 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v696); /*0x8223c8*/
    LOBYTE(v872) = 0x2D; /*0x8223d5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v124); /*0x8223dd*/
    v125 = v696; /*0x8223e2*/
    LOBYTE(v872) = 1; /*0x8223eb*/
    if ( v696 ) /*0x8223f3*/
    {
      --v696[7].Unk08; /*0x8223f5*/
      if ( !v125[7].Unk08 ) /*0x8223fe*/
        sub_772560(v125); /*0x822402*/
    }
    v126 = a3; /*0x822407*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x822412*/
    NiD3DPass_SetTextureStage(v0, 3u, v126); /*0x82241f*/
    v127 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v784); /*0x82242c*/
    LOBYTE(v872) = 0x2E; /*0x822439*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v127); /*0x822441*/
    v128 = v784; /*0x822446*/
    LOBYTE(v872) = 1; /*0x82244f*/
    if ( v784 ) /*0x822457*/
    {
      --v784[7].Unk08; /*0x822459*/
      if ( !v128[7].Unk08 ) /*0x822462*/
        sub_772560(v128); /*0x822466*/
    }
    v129 = a3; /*0x82246b*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x822476*/
    NiD3DPass_SetTextureStage(v0, 4u, v129); /*0x822483*/
    v130 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v698); /*0x822490*/
    LOBYTE(v872) = 0x2F; /*0x82249d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v130); /*0x8224a5*/
    v131 = v698; /*0x8224aa*/
    LOBYTE(v872) = 1; /*0x8224b3*/
    if ( v698 ) /*0x8224bb*/
    {
      --v698[7].Unk08; /*0x8224bd*/
      if ( !v131[7].Unk08 ) /*0x8224c6*/
        sub_772560(v131); /*0x8224ca*/
    }
    v132 = (NiD3DTextureStage *)a3; /*0x8224cf*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8224d9*/
    NiD3DTextureStage_SetTexture(v132, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8224e9*/
    NiD3DPass_SetTextureStage(v0, 5u, &v132->Stage); /*0x8224f3*/
    v133 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v828); /*0x822500*/
    LOBYTE(v872) = 0x30; /*0x82250d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v133); /*0x822515*/
    v134 = v828; /*0x82251a*/
    LOBYTE(v872) = 1; /*0x822523*/
    if ( v828 ) /*0x82252b*/
    {
      --v828[7].Unk08; /*0x82252d*/
      if ( !v134[7].Unk08 ) /*0x822536*/
        sub_772560(v134); /*0x82253a*/
    }
    v135 = a3; /*0x82253f*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82254a*/
    NiD3DPass_SetTextureStage(v0, 6u, v135); /*0x822557*/
    v136 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v700); /*0x822564*/
    LOBYTE(v872) = 0x31; /*0x822571*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v136); /*0x822579*/
    v137 = v700; /*0x82257e*/
    LOBYTE(v872) = 1; /*0x822587*/
    if ( v700 ) /*0x82258f*/
    {
      --v700[7].Unk08; /*0x822591*/
      if ( !v137[7].Unk08 ) /*0x82259a*/
        sub_772560(v137); /*0x82259e*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8225a3*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8225ad*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x8225ba*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4536C); /*0x8225c7*/
  NiD3DPass_SetPixelShader(v0, dword_B45144); /*0x8225d5*/
  if ( !v0->RenderStateGroup ) /*0x8225da*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8225e4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8225ee*/
  if ( !v0->RenderStateGroup ) /*0x8225f3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8225fd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x822607*/
  if ( !v0->RenderStateGroup ) /*0x82260c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822616*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x822621*/
  if ( !v0->RenderStateGroup ) /*0x822626*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822630*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82263b*/
  if ( !v0->RenderStateGroup ) /*0x822640*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82264a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x822655*/
  if ( !v0->RenderStateGroup ) /*0x82265a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822664*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82266e*/
  v3 = v0 == (NiD3DPass *)unk_B45798; /*0x822673*/
  unk_B43D14 = 0x58088; /*0x82267e*/
  unk_B443A4 = 0x10C; /*0x822684*/
  unk_B43684 = 0x18000; /*0x82268e*/
  if ( !v3 ) /*0x822698*/
  {
    v3 = v0->RefCount-- == 1; /*0x82269a*/
    if ( v3 ) /*0x82269e*/
      NiD3DPass_ReleaseToPool(v0); /*0x8226a2*/
    v0 = (NiD3DPass *)unk_B45798; /*0x8226a7*/
    v651 = (NiD3DPassVtbl **)unk_B45798; /*0x8226af*/
    if ( v651 ) /*0x8226b3*/
      ++v0->RefCount; /*0x8226b5*/
  }
  if ( v0->StageCount < 8 ) /*0x8226bd*/
  {
    v138 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v786); /*0x8226cb*/
    LOBYTE(v872) = 0x32; /*0x8226d8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v138); /*0x8226e0*/
    v139 = v786; /*0x8226e5*/
    LOBYTE(v872) = 1; /*0x8226ee*/
    if ( v786 ) /*0x8226f6*/
    {
      --v786[7].Unk08; /*0x8226f8*/
      if ( !v139[7].Unk08 ) /*0x822701*/
        sub_772560(v139); /*0x822705*/
    }
    v140 = a3; /*0x82270a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x822714*/
    NiD3DPass_SetTextureStage(v0, 0, v140); /*0x822720*/
    v141 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v702); /*0x82272d*/
    LOBYTE(v872) = 0x33; /*0x82273a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v141); /*0x822742*/
    v142 = v702; /*0x822747*/
    LOBYTE(v872) = 1; /*0x822750*/
    if ( v702 ) /*0x822758*/
    {
      --v702[7].Unk08; /*0x82275a*/
      if ( !v142[7].Unk08 ) /*0x822763*/
        sub_772560(v142); /*0x822767*/
    }
    v143 = a3; /*0x82276c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x822777*/
    NiD3DPass_SetTextureStage(v0, 1u, v143); /*0x822784*/
    v144 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v850); /*0x822791*/
    LOBYTE(v872) = 0x34; /*0x82279e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v144); /*0x8227a6*/
    v145 = v850; /*0x8227ab*/
    LOBYTE(v872) = 1; /*0x8227b4*/
    if ( v850 ) /*0x8227bc*/
    {
      --v850[7].Unk08; /*0x8227be*/
      if ( !v145[7].Unk08 ) /*0x8227c7*/
        sub_772560(v145); /*0x8227cb*/
    }
    v146 = a3; /*0x8227d0*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8227db*/
    NiD3DPass_SetTextureStage(v0, 2u, v146); /*0x8227e8*/
    v147 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v704); /*0x8227f5*/
    LOBYTE(v872) = 0x35; /*0x822802*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v147); /*0x82280a*/
    v148 = v704; /*0x82280f*/
    LOBYTE(v872) = 1; /*0x822818*/
    if ( v704 ) /*0x822820*/
    {
      --v704[7].Unk08; /*0x822822*/
      if ( !v148[7].Unk08 ) /*0x82282b*/
        sub_772560(v148); /*0x82282f*/
    }
    v149 = a3; /*0x822834*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82283f*/
    NiD3DPass_SetTextureStage(v0, 3u, v149); /*0x82284c*/
    v150 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v788); /*0x822859*/
    LOBYTE(v872) = 0x36; /*0x822866*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v150); /*0x82286e*/
    v151 = v788; /*0x822873*/
    LOBYTE(v872) = 1; /*0x82287c*/
    if ( v788 ) /*0x822884*/
    {
      --v788[7].Unk08; /*0x822886*/
      if ( !v151[7].Unk08 ) /*0x82288f*/
        sub_772560(v151); /*0x822893*/
    }
    v152 = a3; /*0x822898*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8228a3*/
    NiD3DPass_SetTextureStage(v0, 4u, v152); /*0x8228b0*/
    v153 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v706); /*0x8228bd*/
    LOBYTE(v872) = 0x37; /*0x8228ca*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v153); /*0x8228d2*/
    v154 = v706; /*0x8228d7*/
    LOBYTE(v872) = 1; /*0x8228e0*/
    if ( v706 ) /*0x8228e8*/
    {
      --v706[7].Unk08; /*0x8228ea*/
      if ( !v154[7].Unk08 ) /*0x8228f3*/
        sub_772560(v154); /*0x8228f7*/
    }
    v155 = (NiD3DTextureStage *)a3; /*0x8228fc*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x822906*/
    NiD3DTextureStage_SetTexture(v155, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x822917*/
    NiD3DPass_SetTextureStage(v0, 5u, &v155->Stage); /*0x822921*/
    v156 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v830); /*0x82292e*/
    LOBYTE(v872) = 0x38; /*0x82293b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v156); /*0x822943*/
    v157 = v830; /*0x822948*/
    LOBYTE(v872) = 1; /*0x822951*/
    if ( v830 ) /*0x822959*/
    {
      --v830[7].Unk08; /*0x82295b*/
      if ( !v157[7].Unk08 ) /*0x822964*/
        sub_772560(v157); /*0x822968*/
    }
    v158 = a3; /*0x82296d*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x822978*/
    NiD3DPass_SetTextureStage(v0, 6u, v158); /*0x822985*/
    v159 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v708); /*0x822992*/
    LOBYTE(v872) = 0x39; /*0x82299f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v159); /*0x8229a7*/
    v160 = v708; /*0x8229ac*/
    LOBYTE(v872) = 1; /*0x8229b5*/
    if ( v708 ) /*0x8229bd*/
    {
      --v708[7].Unk08; /*0x8229bf*/
      if ( !v160[7].Unk08 ) /*0x8229c8*/
        sub_772560(v160); /*0x8229cc*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8229d1*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8229db*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x8229e8*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4536C); /*0x8229f6*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B4514C); /*0x822a03*/
  if ( !v0->RenderStateGroup ) /*0x822a08*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822a12*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x822a1c*/
  if ( !v0->RenderStateGroup ) /*0x822a21*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822a2b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x822a35*/
  if ( !v0->RenderStateGroup ) /*0x822a3a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822a44*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x822a4f*/
  if ( !v0->RenderStateGroup ) /*0x822a54*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822a5e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x822a69*/
  if ( !v0->RenderStateGroup ) /*0x822a6e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822a78*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x822a83*/
  if ( !v0->RenderStateGroup ) /*0x822a88*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822a92*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x822a9c*/
  v3 = v0 == (NiD3DPass *)unk_B457AC; /*0x822aa1*/
  unk_B43D18 = 0x58088; /*0x822aa7*/
  unk_B443A8 = 0x18C; /*0x822aad*/
  unk_B43688 = 0x18000; /*0x822ab7*/
  unk_B44A38 = 0xC; /*0x822ac1*/
  if ( !v3 ) /*0x822acb*/
  {
    v3 = v0->RefCount-- == 1; /*0x822acd*/
    if ( v3 ) /*0x822ad1*/
      NiD3DPass_ReleaseToPool(v0); /*0x822ad5*/
    v0 = (NiD3DPass *)unk_B457AC; /*0x822ada*/
    v651 = (NiD3DPassVtbl **)unk_B457AC; /*0x822ae2*/
    if ( v651 ) /*0x822ae6*/
      ++v0->RefCount; /*0x822ae8*/
  }
  if ( v0->StageCount < 8 ) /*0x822af0*/
  {
    v161 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v790); /*0x822afe*/
    LOBYTE(v872) = 0x3A; /*0x822b0b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v161); /*0x822b13*/
    v162 = v790; /*0x822b18*/
    LOBYTE(v872) = 1; /*0x822b21*/
    if ( v790 ) /*0x822b29*/
    {
      --v790[7].Unk08; /*0x822b2b*/
      if ( !v162[7].Unk08 ) /*0x822b34*/
        sub_772560(v162); /*0x822b38*/
    }
    v163 = a3; /*0x822b3d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x822b47*/
    NiD3DPass_SetTextureStage(v0, 0, v163); /*0x822b53*/
    v164 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v710); /*0x822b60*/
    LOBYTE(v872) = 0x3B; /*0x822b6d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v164); /*0x822b75*/
    v165 = v710; /*0x822b7a*/
    LOBYTE(v872) = 1; /*0x822b83*/
    if ( v710 ) /*0x822b8b*/
    {
      --v710[7].Unk08; /*0x822b8d*/
      if ( !v165[7].Unk08 ) /*0x822b96*/
        sub_772560(v165); /*0x822b9a*/
    }
    v166 = a3; /*0x822b9f*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x822baa*/
    NiD3DPass_SetTextureStage(v0, 1u, v166); /*0x822bb7*/
    v167 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v866); /*0x822bc4*/
    LOBYTE(v872) = 0x3C; /*0x822bd1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v167); /*0x822bd9*/
    v168 = v866; /*0x822bde*/
    LOBYTE(v872) = 1; /*0x822be7*/
    if ( v866 ) /*0x822bef*/
    {
      --v866[7].Unk08; /*0x822bf1*/
      if ( !v168[7].Unk08 ) /*0x822bfa*/
        sub_772560(v168); /*0x822bfe*/
    }
    v169 = a3; /*0x822c03*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x822c0e*/
    NiD3DPass_SetTextureStage(v0, 2u, v169); /*0x822c1b*/
    v170 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v712); /*0x822c28*/
    LOBYTE(v872) = 0x3D; /*0x822c35*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v170); /*0x822c3d*/
    v171 = v712; /*0x822c42*/
    LOBYTE(v872) = 1; /*0x822c4b*/
    if ( v712 ) /*0x822c53*/
    {
      --v712[7].Unk08; /*0x822c55*/
      if ( !v171[7].Unk08 ) /*0x822c5e*/
        sub_772560(v171); /*0x822c62*/
    }
    v172 = a3; /*0x822c67*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x822c72*/
    NiD3DPass_SetTextureStage(v0, 3u, v172); /*0x822c7f*/
    v173 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v792); /*0x822c8c*/
    LOBYTE(v872) = 0x3E; /*0x822c99*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v173); /*0x822ca1*/
    v174 = v792; /*0x822ca6*/
    LOBYTE(v872) = 1; /*0x822caf*/
    if ( v792 ) /*0x822cb7*/
    {
      --v792[7].Unk08; /*0x822cb9*/
      if ( !v174[7].Unk08 ) /*0x822cc2*/
        sub_772560(v174); /*0x822cc6*/
    }
    v175 = a3; /*0x822ccb*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x822cd6*/
    NiD3DPass_SetTextureStage(v0, 4u, v175); /*0x822ce3*/
    v176 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v714); /*0x822cf0*/
    LOBYTE(v872) = 0x3F; /*0x822cfd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v176); /*0x822d05*/
    v177 = v714; /*0x822d0a*/
    LOBYTE(v872) = 1; /*0x822d13*/
    if ( v714 ) /*0x822d1b*/
    {
      --v714[7].Unk08; /*0x822d1d*/
      if ( !v177[7].Unk08 ) /*0x822d26*/
        sub_772560(v177); /*0x822d2a*/
    }
    v178 = (NiD3DTextureStage *)a3; /*0x822d2f*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x822d39*/
    NiD3DTextureStage_SetTexture(v178, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x822d4a*/
    NiD3DPass_SetTextureStage(v0, 5u, &v178->Stage); /*0x822d54*/
    v179 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v832); /*0x822d61*/
    LOBYTE(v872) = 0x40; /*0x822d6e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v179); /*0x822d76*/
    v180 = v832; /*0x822d7b*/
    LOBYTE(v872) = 1; /*0x822d84*/
    if ( v832 ) /*0x822d8c*/
    {
      --v832[7].Unk08; /*0x822d8e*/
      if ( !v180[7].Unk08 ) /*0x822d97*/
        sub_772560(v180); /*0x822d9b*/
    }
    v181 = a3; /*0x822da0*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x822dab*/
    NiD3DPass_SetTextureStage(v0, 6u, v181); /*0x822db8*/
    v182 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v716); /*0x822dc5*/
    LOBYTE(v872) = 0x41; /*0x822dd2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v182); /*0x822dda*/
    v183 = v716; /*0x822ddf*/
    LOBYTE(v872) = 1; /*0x822de8*/
    if ( v716 ) /*0x822df0*/
    {
      --v716[7].Unk08; /*0x822df2*/
      if ( !v183[7].Unk08 ) /*0x822dfb*/
        sub_772560(v183); /*0x822dff*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x822e04*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x822e0e*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x822e1b*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4536C); /*0x822e29*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45160); /*0x822e37*/
  if ( !v0->RenderStateGroup ) /*0x822e3c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822e46*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x822e50*/
  if ( !v0->RenderStateGroup ) /*0x822e55*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822e5f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x822e69*/
  if ( !v0->RenderStateGroup ) /*0x822e6e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822e78*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x822e83*/
  if ( !v0->RenderStateGroup ) /*0x822e88*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822e92*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x822e9d*/
  if ( !v0->RenderStateGroup ) /*0x822ea2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822eac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x822eb7*/
  if ( !v0->RenderStateGroup ) /*0x822ebc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x822ec6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x822ed0*/
  v3 = v0 == (NiD3DPass *)unk_B457B0; /*0x822ed5*/
  unk_B43D2C = 0x58088; /*0x822edb*/
  unk_B443BC = 0x18C; /*0x822ee1*/
  unk_B4369C = 0x18000; /*0x822eeb*/
  unk_B44A4C = 0xC; /*0x822ef5*/
  if ( !v3 ) /*0x822eff*/
  {
    v3 = v0->RefCount-- == 1; /*0x822f01*/
    if ( v3 ) /*0x822f05*/
      NiD3DPass_ReleaseToPool(v0); /*0x822f09*/
    v0 = (NiD3DPass *)unk_B457B0; /*0x822f0e*/
    v651 = (NiD3DPassVtbl **)unk_B457B0; /*0x822f16*/
    if ( v651 ) /*0x822f1a*/
      ++v0->RefCount; /*0x822f1c*/
  }
  if ( v0->StageCount < 8 ) /*0x822f24*/
  {
    v184 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v794); /*0x822f32*/
    LOBYTE(v872) = 0x42; /*0x822f3f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v184); /*0x822f47*/
    v185 = v794; /*0x822f4c*/
    LOBYTE(v872) = 1; /*0x822f55*/
    if ( v794 ) /*0x822f5d*/
    {
      --v794[7].Unk08; /*0x822f5f*/
      if ( !v185[7].Unk08 ) /*0x822f68*/
        sub_772560(v185); /*0x822f6c*/
    }
    v186 = a3; /*0x822f71*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x822f7b*/
    NiD3DPass_SetTextureStage(v0, 0, v186); /*0x822f87*/
    v187 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v718); /*0x822f94*/
    LOBYTE(v872) = 0x43; /*0x822fa1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v187); /*0x822fa9*/
    v188 = v718; /*0x822fae*/
    LOBYTE(v872) = 1; /*0x822fb7*/
    if ( v718 ) /*0x822fbf*/
    {
      --v718[7].Unk08; /*0x822fc1*/
      if ( !v188[7].Unk08 ) /*0x822fca*/
        sub_772560(v188); /*0x822fce*/
    }
    v189 = a3; /*0x822fd3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x822fde*/
    NiD3DPass_SetTextureStage(v0, 1u, v189); /*0x822feb*/
    v190 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v852); /*0x822ff8*/
    LOBYTE(v872) = 0x44; /*0x823005*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v190); /*0x82300d*/
    v191 = v852; /*0x823012*/
    LOBYTE(v872) = 1; /*0x82301b*/
    if ( v852 ) /*0x823023*/
    {
      --v852[7].Unk08; /*0x823025*/
      if ( !v191[7].Unk08 ) /*0x82302e*/
        sub_772560(v191); /*0x823032*/
    }
    v192 = a3; /*0x823037*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x823042*/
    NiD3DPass_SetTextureStage(v0, 2u, v192); /*0x82304f*/
    v193 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v720); /*0x82305c*/
    LOBYTE(v872) = 0x45; /*0x823069*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v193); /*0x823071*/
    v194 = v720; /*0x823076*/
    LOBYTE(v872) = 1; /*0x82307f*/
    if ( v720 ) /*0x823087*/
    {
      --v720[7].Unk08; /*0x823089*/
      if ( !v194[7].Unk08 ) /*0x823092*/
        sub_772560(v194); /*0x823096*/
    }
    v195 = a3; /*0x82309b*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8230a6*/
    NiD3DPass_SetTextureStage(v0, 3u, v195); /*0x8230b3*/
    v196 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v796); /*0x8230c0*/
    LOBYTE(v872) = 0x46; /*0x8230cd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v196); /*0x8230d5*/
    v197 = v796; /*0x8230da*/
    LOBYTE(v872) = 1; /*0x8230e3*/
    if ( v796 ) /*0x8230eb*/
    {
      --v796[7].Unk08; /*0x8230ed*/
      if ( !v197[7].Unk08 ) /*0x8230f6*/
        sub_772560(v197); /*0x8230fa*/
    }
    v198 = a3; /*0x8230ff*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82310a*/
    NiD3DPass_SetTextureStage(v0, 4u, v198); /*0x823117*/
    v199 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v722); /*0x823124*/
    LOBYTE(v872) = 0x47; /*0x823131*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v199); /*0x823139*/
    v200 = v722; /*0x82313e*/
    LOBYTE(v872) = 1; /*0x823147*/
    if ( v722 ) /*0x82314f*/
    {
      --v722[7].Unk08; /*0x823151*/
      if ( !v200[7].Unk08 ) /*0x82315a*/
        sub_772560(v200); /*0x82315e*/
    }
    v201 = (NiD3DTextureStage *)a3; /*0x823163*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82316d*/
    NiD3DTextureStage_SetTexture(v201, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82317d*/
    NiD3DPass_SetTextureStage(v0, 5u, &v201->Stage); /*0x823187*/
    v202 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v834); /*0x823194*/
    LOBYTE(v872) = 0x48; /*0x8231a1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v202); /*0x8231a9*/
    v203 = v834; /*0x8231ae*/
    LOBYTE(v872) = 1; /*0x8231b7*/
    if ( v834 ) /*0x8231bf*/
    {
      --v834[7].Unk08; /*0x8231c1*/
      if ( !v203[7].Unk08 ) /*0x8231ca*/
        sub_772560(v203); /*0x8231ce*/
    }
    v204 = a3; /*0x8231d3*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8231de*/
    NiD3DPass_SetTextureStage(v0, 6u, v204); /*0x8231eb*/
    v205 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v724); /*0x8231f8*/
    LOBYTE(v872) = 0x49; /*0x823205*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v205); /*0x82320d*/
    v206 = v724; /*0x823212*/
    LOBYTE(v872) = 1; /*0x82321b*/
    if ( v724 ) /*0x823223*/
    {
      --v724[7].Unk08; /*0x823225*/
      if ( !v206[7].Unk08 ) /*0x82322e*/
        sub_772560(v206); /*0x823232*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x823237*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x823241*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82324e*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45370); /*0x82325b*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45150); /*0x823269*/
  if ( !v0->RenderStateGroup ) /*0x82326e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823278*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x823282*/
  if ( !v0->RenderStateGroup ) /*0x823287*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823291*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82329b*/
  if ( !v0->RenderStateGroup ) /*0x8232a0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8232aa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8232b5*/
  if ( !v0->RenderStateGroup ) /*0x8232ba*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8232c4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8232cf*/
  if ( !v0->RenderStateGroup ) /*0x8232d4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8232de*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8232e9*/
  if ( !v0->RenderStateGroup ) /*0x8232ee*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8232f8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x823302*/
  v3 = v0 == (NiD3DPass *)unk_B457B4; /*0x823307*/
  unk_B43D30 = 0x180F2; /*0x823312*/
  unk_B443C0 = 0x10C; /*0x823318*/
  unk_B436A0 = 0x18060; /*0x823322*/
  unk_B44A50 = 8; /*0x82332c*/
  if ( !v3 ) /*0x823336*/
  {
    v3 = v0->RefCount-- == 1; /*0x823338*/
    if ( v3 ) /*0x82333c*/
      NiD3DPass_ReleaseToPool(v0); /*0x823340*/
    v0 = (NiD3DPass *)unk_B457B4; /*0x823345*/
    v651 = (NiD3DPassVtbl **)unk_B457B4; /*0x82334d*/
    if ( v651 ) /*0x823351*/
      ++v0->RefCount; /*0x823353*/
  }
  if ( v0->StageCount < 8 ) /*0x82335b*/
  {
    v207 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v798); /*0x823369*/
    LOBYTE(v872) = 0x4A; /*0x823376*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v207); /*0x82337e*/
    v208 = v798; /*0x823383*/
    LOBYTE(v872) = 1; /*0x82338c*/
    if ( v798 ) /*0x823394*/
    {
      --v798[7].Unk08; /*0x823396*/
      if ( !v208[7].Unk08 ) /*0x82339f*/
        sub_772560(v208); /*0x8233a3*/
    }
    v209 = a3; /*0x8233a8*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8233b2*/
    NiD3DPass_SetTextureStage(v0, 0, v209); /*0x8233be*/
    v210 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v726); /*0x8233cb*/
    LOBYTE(v872) = 0x4B; /*0x8233d8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v210); /*0x8233e0*/
    v211 = v726; /*0x8233e5*/
    LOBYTE(v872) = 1; /*0x8233ee*/
    if ( v726 ) /*0x8233f6*/
    {
      --v726[7].Unk08; /*0x8233f8*/
      if ( !v211[7].Unk08 ) /*0x823401*/
        sub_772560(v211); /*0x823405*/
    }
    v212 = a3; /*0x82340a*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x823415*/
    NiD3DPass_SetTextureStage(v0, 1u, v212); /*0x823422*/
    v213 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v862); /*0x82342f*/
    LOBYTE(v872) = 0x4C; /*0x82343c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v213); /*0x823444*/
    v214 = v862; /*0x823449*/
    LOBYTE(v872) = 1; /*0x823452*/
    if ( v862 ) /*0x82345a*/
    {
      --v862[7].Unk08; /*0x82345c*/
      if ( !v214[7].Unk08 ) /*0x823465*/
        sub_772560(v214); /*0x823469*/
    }
    v215 = a3; /*0x82346e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x823479*/
    NiD3DPass_SetTextureStage(v0, 2u, v215); /*0x823486*/
    v216 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v728); /*0x823493*/
    LOBYTE(v872) = 0x4D; /*0x8234a0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v216); /*0x8234a8*/
    v217 = v728; /*0x8234ad*/
    LOBYTE(v872) = 1; /*0x8234b6*/
    if ( v728 ) /*0x8234be*/
    {
      --v728[7].Unk08; /*0x8234c0*/
      if ( !v217[7].Unk08 ) /*0x8234c9*/
        sub_772560(v217); /*0x8234cd*/
    }
    v218 = a3; /*0x8234d2*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8234dd*/
    NiD3DPass_SetTextureStage(v0, 3u, v218); /*0x8234ea*/
    v219 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v800); /*0x8234f7*/
    LOBYTE(v872) = 0x4E; /*0x823504*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v219); /*0x82350c*/
    v220 = v800; /*0x823511*/
    LOBYTE(v872) = 1; /*0x82351a*/
    if ( v800 ) /*0x823522*/
    {
      --v800[7].Unk08; /*0x823524*/
      if ( !v220[7].Unk08 ) /*0x82352d*/
        sub_772560(v220); /*0x823531*/
    }
    v221 = a3; /*0x823536*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x823541*/
    NiD3DPass_SetTextureStage(v0, 4u, v221); /*0x82354e*/
    v222 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v730); /*0x82355b*/
    LOBYTE(v872) = 0x4F; /*0x823568*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v222); /*0x823570*/
    v223 = v730; /*0x823575*/
    LOBYTE(v872) = 1; /*0x82357e*/
    if ( v730 ) /*0x823586*/
    {
      --v730[7].Unk08; /*0x823588*/
      if ( !v223[7].Unk08 ) /*0x823591*/
        sub_772560(v223); /*0x823595*/
    }
    v224 = (NiD3DTextureStage *)a3; /*0x82359a*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8235a4*/
    NiD3DTextureStage_SetTexture(v224, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8235b5*/
    NiD3DPass_SetTextureStage(v0, 5u, &v224->Stage); /*0x8235bf*/
    v225 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v836); /*0x8235cc*/
    LOBYTE(v872) = 0x50; /*0x8235d9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v225); /*0x8235e1*/
    v226 = v836; /*0x8235e6*/
    LOBYTE(v872) = 1; /*0x8235ef*/
    if ( v836 ) /*0x8235f7*/
    {
      --v836[7].Unk08; /*0x8235f9*/
      if ( !v226[7].Unk08 ) /*0x823602*/
        sub_772560(v226); /*0x823606*/
    }
    v227 = a3; /*0x82360b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x823616*/
    NiD3DPass_SetTextureStage(v0, 6u, v227); /*0x823623*/
    v228 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v732); /*0x823630*/
    LOBYTE(v872) = 0x51; /*0x82363d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v228); /*0x823645*/
    v229 = v732; /*0x82364a*/
    LOBYTE(v872) = 1; /*0x823653*/
    if ( v732 ) /*0x82365b*/
    {
      --v732[7].Unk08; /*0x82365d*/
      if ( !v229[7].Unk08 ) /*0x823666*/
        sub_772560(v229); /*0x82366a*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82366f*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x823679*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x823686*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45374); /*0x823694*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45154); /*0x8236a1*/
  if ( !v0->RenderStateGroup ) /*0x8236a6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8236b0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8236ba*/
  if ( !v0->RenderStateGroup ) /*0x8236bf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8236c9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8236d3*/
  if ( !v0->RenderStateGroup ) /*0x8236d8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8236e2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8236ed*/
  if ( !v0->RenderStateGroup ) /*0x8236f2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8236fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x823707*/
  if ( !v0->RenderStateGroup ) /*0x82370c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823716*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x823721*/
  if ( !v0->RenderStateGroup ) /*0x823726*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823730*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82373a*/
  unk_B43D34 = 0xA0180F2; /*0x823748*/
  unk_B443C4 = 0x10C; /*0x823752*/
  unk_B436A4 = 0xA018060; /*0x82375c*/
  unk_B44A54 = 8; /*0x823766*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457B8); /*0x823770*/
  v230 = (NiD3DPass *)v651; /*0x823775*/
  if ( (unsigned int)v651[6] < 8 ) /*0x82377d*/
  {
    v231 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v802); /*0x82378b*/
    LOBYTE(v872) = 0x52; /*0x823798*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v231); /*0x8237a0*/
    v232 = v802; /*0x8237a5*/
    LOBYTE(v872) = 1; /*0x8237ae*/
    if ( v802 ) /*0x8237b6*/
    {
      --v802[7].Unk08; /*0x8237b8*/
      if ( !v232[7].Unk08 ) /*0x8237c1*/
        sub_772560(v232); /*0x8237c5*/
    }
    v233 = a3; /*0x8237ca*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8237d4*/
    NiD3DPass_SetTextureStage(v230, 0, v233); /*0x8237e0*/
    v234 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v734); /*0x8237ed*/
    LOBYTE(v872) = 0x53; /*0x8237fa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v234); /*0x823802*/
    v235 = v734; /*0x823807*/
    LOBYTE(v872) = 1; /*0x823810*/
    if ( v734 ) /*0x823818*/
    {
      --v734[7].Unk08; /*0x82381a*/
      if ( !v235[7].Unk08 ) /*0x823823*/
        sub_772560(v235); /*0x823827*/
    }
    v236 = a3; /*0x82382c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x823837*/
    NiD3DPass_SetTextureStage(v230, 1u, v236); /*0x823844*/
    v237 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v854); /*0x823851*/
    LOBYTE(v872) = 0x54; /*0x82385e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v237); /*0x823866*/
    v238 = v854; /*0x82386b*/
    LOBYTE(v872) = 1; /*0x823874*/
    if ( v854 ) /*0x82387c*/
    {
      --v854[7].Unk08; /*0x82387e*/
      if ( !v238[7].Unk08 ) /*0x823887*/
        sub_772560(v238); /*0x82388b*/
    }
    v239 = a3; /*0x823890*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82389b*/
    NiD3DPass_SetTextureStage(v230, 2u, v239); /*0x8238a8*/
    v240 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v736); /*0x8238b5*/
    LOBYTE(v872) = 0x55; /*0x8238c2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v240); /*0x8238ca*/
    v241 = v736; /*0x8238cf*/
    LOBYTE(v872) = 1; /*0x8238d8*/
    if ( v736 ) /*0x8238e0*/
    {
      --v736[7].Unk08; /*0x8238e2*/
      if ( !v241[7].Unk08 ) /*0x8238eb*/
        sub_772560(v241); /*0x8238ef*/
    }
    v242 = a3; /*0x8238f4*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8238ff*/
    NiD3DPass_SetTextureStage(v230, 3u, v242); /*0x82390c*/
    v243 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v804); /*0x823919*/
    LOBYTE(v872) = 0x56; /*0x823926*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v243); /*0x82392e*/
    v244 = v804; /*0x823933*/
    LOBYTE(v872) = 1; /*0x82393c*/
    if ( v804 ) /*0x823944*/
    {
      --v804[7].Unk08; /*0x823946*/
      if ( !v244[7].Unk08 ) /*0x82394f*/
        sub_772560(v244); /*0x823953*/
    }
    v245 = a3; /*0x823958*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x823963*/
    NiD3DPass_SetTextureStage(v230, 4u, v245); /*0x823970*/
    v246 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v738); /*0x82397d*/
    LOBYTE(v872) = 0x57; /*0x82398a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v246); /*0x823992*/
    v247 = v738; /*0x823997*/
    LOBYTE(v872) = 1; /*0x8239a0*/
    if ( v738 ) /*0x8239a8*/
    {
      --v738[7].Unk08; /*0x8239aa*/
      if ( !v247[7].Unk08 ) /*0x8239b3*/
        sub_772560(v247); /*0x8239b7*/
    }
    v248 = (NiD3DTextureStage *)a3; /*0x8239bc*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8239c6*/
    NiD3DTextureStage_SetTexture(v248, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8239d7*/
    NiD3DPass_SetTextureStage(v230, 5u, &v248->Stage); /*0x8239e1*/
    v249 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v838); /*0x8239ee*/
    LOBYTE(v872) = 0x58; /*0x8239fb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v249); /*0x823a03*/
    v250 = v838; /*0x823a08*/
    LOBYTE(v872) = 1; /*0x823a11*/
    if ( v838 ) /*0x823a19*/
    {
      --v838[7].Unk08; /*0x823a1b*/
      if ( !v250[7].Unk08 ) /*0x823a24*/
        sub_772560(v250); /*0x823a28*/
    }
    v251 = a3; /*0x823a2d*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x823a38*/
    NiD3DPass_SetTextureStage(v230, 6u, v251); /*0x823a45*/
    v252 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v740); /*0x823a52*/
    LOBYTE(v872) = 0x59; /*0x823a5f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v252); /*0x823a67*/
    v253 = v740; /*0x823a6c*/
    LOBYTE(v872) = 1; /*0x823a75*/
    if ( v740 ) /*0x823a7d*/
    {
      --v740[7].Unk08; /*0x823a7f*/
      if ( !v253[7].Unk08 ) /*0x823a88*/
        sub_772560(v253); /*0x823a8c*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x823a91*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x823a9b*/
    NiD3DPass_SetTextureStage(v230, 7u, &v1->Stage); /*0x823aa8*/
  }
  NiD3DPass_SetVertexShader(v230, (NiD3DVertexShader *)unk_B45370); /*0x823ab6*/
  NiD3DPass_SetPixelShader(v230, (NiD3DPixelShader *)unk_B45158); /*0x823ac4*/
  if ( !v230->RenderStateGroup ) /*0x823ac9*/
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823ad3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v230->RenderStateGroup, 0x1B, 0, 0); /*0x823add*/
  if ( !v230->RenderStateGroup ) /*0x823ae2*/
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823aec*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v230->RenderStateGroup, 0xF, 0, 0); /*0x823af6*/
  if ( !v230->RenderStateGroup ) /*0x823afb*/
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823b05*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v230->RenderStateGroup, 7, 1, 0); /*0x823b10*/
  if ( !v230->RenderStateGroup ) /*0x823b15*/
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823b1f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v230->RenderStateGroup, 0x17, 4, 0); /*0x823b2a*/
  if ( !v230->RenderStateGroup ) /*0x823b2f*/
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823b39*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v230->RenderStateGroup, 0xE, 1, 0); /*0x823b44*/
  if ( !v230->RenderStateGroup ) /*0x823b49*/
    v230->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823b53*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v230->RenderStateGroup, 0x34, 0, 0); /*0x823b5d*/
  unk_B43D38 = 0x180F2; /*0x823b6b*/
  unk_B443C8 = 0x18C; /*0x823b71*/
  unk_B436A8 = 0x18060; /*0x823b7b*/
  unk_B44A58 = 0xC; /*0x823b85*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457C8); /*0x823b8f*/
  v254 = (NiD3DPass *)v651; /*0x823b94*/
  if ( (unsigned int)v651[6] < 8 ) /*0x823b9c*/
  {
    v255 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v806); /*0x823baa*/
    LOBYTE(v872) = 0x5A; /*0x823bb7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v255); /*0x823bbf*/
    v256 = v806; /*0x823bc4*/
    LOBYTE(v872) = 1; /*0x823bcd*/
    if ( v806 ) /*0x823bd5*/
    {
      --v806[7].Unk08; /*0x823bd7*/
      if ( !v256[7].Unk08 ) /*0x823be0*/
        sub_772560(v256); /*0x823be4*/
    }
    v257 = a3; /*0x823be9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x823bf3*/
    NiD3DPass_SetTextureStage(v254, 0, v257); /*0x823bff*/
    v258 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v742); /*0x823c0c*/
    LOBYTE(v872) = 0x5B; /*0x823c19*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v258); /*0x823c21*/
    v259 = v742; /*0x823c26*/
    LOBYTE(v872) = 1; /*0x823c2f*/
    if ( v742 ) /*0x823c37*/
    {
      --v742[7].Unk08; /*0x823c39*/
      if ( !v259[7].Unk08 ) /*0x823c42*/
        sub_772560(v259); /*0x823c46*/
    }
    v260 = a3; /*0x823c4b*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x823c56*/
    NiD3DPass_SetTextureStage(v254, 1u, v260); /*0x823c63*/
    v261 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v870); /*0x823c70*/
    LOBYTE(v872) = 0x5C; /*0x823c7d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v261); /*0x823c85*/
    v262 = v870; /*0x823c8a*/
    LOBYTE(v872) = 1; /*0x823c93*/
    if ( v870 ) /*0x823c9b*/
    {
      --v870[7].Unk08; /*0x823c9d*/
      if ( !v262[7].Unk08 ) /*0x823ca6*/
        sub_772560(v262); /*0x823caa*/
    }
    v263 = a3; /*0x823caf*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x823cba*/
    NiD3DPass_SetTextureStage(v254, 2u, v263); /*0x823cc7*/
    v264 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v744); /*0x823cd4*/
    LOBYTE(v872) = 0x5D; /*0x823ce1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v264); /*0x823ce9*/
    v265 = v744; /*0x823cee*/
    LOBYTE(v872) = 1; /*0x823cf7*/
    if ( v744 ) /*0x823cff*/
    {
      --v744[7].Unk08; /*0x823d01*/
      if ( !v265[7].Unk08 ) /*0x823d0a*/
        sub_772560(v265); /*0x823d0e*/
    }
    v266 = a3; /*0x823d13*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x823d1e*/
    NiD3DPass_SetTextureStage(v254, 3u, v266); /*0x823d2b*/
    v267 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v808); /*0x823d38*/
    LOBYTE(v872) = 0x5E; /*0x823d45*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v267); /*0x823d4d*/
    v268 = v808; /*0x823d52*/
    LOBYTE(v872) = 1; /*0x823d5b*/
    if ( v808 ) /*0x823d63*/
    {
      --v808[7].Unk08; /*0x823d65*/
      if ( !v268[7].Unk08 ) /*0x823d6e*/
        sub_772560(v268); /*0x823d72*/
    }
    v269 = a3; /*0x823d77*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x823d82*/
    NiD3DPass_SetTextureStage(v254, 4u, v269); /*0x823d8f*/
    v270 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v746); /*0x823d9c*/
    LOBYTE(v872) = 0x5F; /*0x823da9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v270); /*0x823db1*/
    v271 = v746; /*0x823db6*/
    LOBYTE(v872) = 1; /*0x823dbf*/
    if ( v746 ) /*0x823dc7*/
    {
      --v746[7].Unk08; /*0x823dc9*/
      if ( !v271[7].Unk08 ) /*0x823dd2*/
        sub_772560(v271); /*0x823dd6*/
    }
    v272 = (NiD3DTextureStage *)a3; /*0x823ddb*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x823de5*/
    NiD3DTextureStage_SetTexture(v272, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x823df5*/
    NiD3DPass_SetTextureStage(v254, 5u, &v272->Stage); /*0x823dff*/
    v273 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v840); /*0x823e0c*/
    LOBYTE(v872) = 0x60; /*0x823e19*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v273); /*0x823e21*/
    v274 = v840; /*0x823e26*/
    LOBYTE(v872) = 1; /*0x823e2f*/
    if ( v840 ) /*0x823e37*/
    {
      --v840[7].Unk08; /*0x823e39*/
      if ( !v274[7].Unk08 ) /*0x823e42*/
        sub_772560(v274); /*0x823e46*/
    }
    v275 = a3; /*0x823e4b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x823e56*/
    NiD3DPass_SetTextureStage(v254, 6u, v275); /*0x823e63*/
    v276 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v748); /*0x823e70*/
    LOBYTE(v872) = 0x61; /*0x823e7d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v276); /*0x823e85*/
    v277 = v748; /*0x823e8a*/
    LOBYTE(v872) = 1; /*0x823e93*/
    if ( v748 ) /*0x823e9b*/
    {
      --v748[7].Unk08; /*0x823e9d*/
      if ( !v277[7].Unk08 ) /*0x823ea6*/
        sub_772560(v277); /*0x823eaa*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x823eaf*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x823eb9*/
    NiD3DPass_SetTextureStage(v254, 7u, &v1->Stage); /*0x823ec6*/
  }
  NiD3DPass_SetVertexShader(v254, (NiD3DVertexShader *)unk_B45370); /*0x823ed3*/
  NiD3DPass_SetPixelShader(v254, (NiD3DPixelShader *)unk_B45164); /*0x823ee1*/
  if ( !v254->RenderStateGroup ) /*0x823ee6*/
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823ef0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v254->RenderStateGroup, 0x1B, 0, 0); /*0x823efa*/
  if ( !v254->RenderStateGroup ) /*0x823eff*/
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823f09*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v254->RenderStateGroup, 0xF, 0, 0); /*0x823f13*/
  if ( !v254->RenderStateGroup ) /*0x823f18*/
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823f22*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v254->RenderStateGroup, 7, 1, 0); /*0x823f2d*/
  if ( !v254->RenderStateGroup ) /*0x823f32*/
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823f3c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v254->RenderStateGroup, 0x17, 4, 0); /*0x823f47*/
  if ( !v254->RenderStateGroup ) /*0x823f4c*/
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823f56*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v254->RenderStateGroup, 0xE, 1, 0); /*0x823f61*/
  if ( !v254->RenderStateGroup ) /*0x823f66*/
    v254->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x823f70*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v254->RenderStateGroup, 0x34, 0, 0); /*0x823f7a*/
  unk_B43D48 = 0x180F2; /*0x823f88*/
  unk_B443D8 = 0x18C; /*0x823f8e*/
  unk_B436B8 = 0x18060; /*0x823f98*/
  unk_B44A68 = 0xC; /*0x823fa2*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457CC); /*0x823fac*/
  v278 = (NiD3DPass *)v651; /*0x823fb1*/
  if ( (unsigned int)v651[6] < 8 ) /*0x823fb9*/
  {
    v279 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v810); /*0x823fc7*/
    LOBYTE(v872) = 0x62; /*0x823fd4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v279); /*0x823fdc*/
    v280 = v810; /*0x823fe1*/
    LOBYTE(v872) = 1; /*0x823fea*/
    if ( v810 ) /*0x823ff2*/
    {
      --v810[7].Unk08; /*0x823ff4*/
      if ( !v280[7].Unk08 ) /*0x823ffd*/
        sub_772560(v280); /*0x824001*/
    }
    v281 = a3; /*0x824006*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x824010*/
    NiD3DPass_SetTextureStage(v278, 0, v281); /*0x82401c*/
    v282 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v750); /*0x824029*/
    LOBYTE(v872) = 0x63; /*0x824036*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v282); /*0x82403e*/
    v283 = v750; /*0x824043*/
    LOBYTE(v872) = 1; /*0x82404c*/
    if ( v750 ) /*0x824054*/
    {
      --v750[7].Unk08; /*0x824056*/
      if ( !v283[7].Unk08 ) /*0x82405f*/
        sub_772560(v283); /*0x824063*/
    }
    v284 = a3; /*0x824068*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x824073*/
    NiD3DPass_SetTextureStage(v278, 1u, v284); /*0x824080*/
    v285 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v856); /*0x82408d*/
    LOBYTE(v872) = 0x64; /*0x82409a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v285); /*0x8240a2*/
    v286 = v856; /*0x8240a7*/
    LOBYTE(v872) = 1; /*0x8240b0*/
    if ( v856 ) /*0x8240b8*/
    {
      --v856[7].Unk08; /*0x8240ba*/
      if ( !v286[7].Unk08 ) /*0x8240c3*/
        sub_772560(v286); /*0x8240c7*/
    }
    v287 = a3; /*0x8240cc*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8240d7*/
    NiD3DPass_SetTextureStage(v278, 2u, v287); /*0x8240e4*/
    v288 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v752); /*0x8240f1*/
    LOBYTE(v872) = 0x65; /*0x8240fe*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v288); /*0x824106*/
    v289 = v752; /*0x82410b*/
    LOBYTE(v872) = 1; /*0x824114*/
    if ( v752 ) /*0x82411c*/
    {
      --v752[7].Unk08; /*0x82411e*/
      if ( !v289[7].Unk08 ) /*0x824127*/
        sub_772560(v289); /*0x82412b*/
    }
    v290 = a3; /*0x824130*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82413b*/
    NiD3DPass_SetTextureStage(v278, 3u, v290); /*0x824148*/
    v291 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v812); /*0x824155*/
    LOBYTE(v872) = 0x66; /*0x824162*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v291); /*0x82416a*/
    v292 = v812; /*0x82416f*/
    LOBYTE(v872) = 1; /*0x824178*/
    if ( v812 ) /*0x824180*/
    {
      --v812[7].Unk08; /*0x824182*/
      if ( !v292[7].Unk08 ) /*0x82418b*/
        sub_772560(v292); /*0x82418f*/
    }
    v293 = a3; /*0x824194*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82419f*/
    NiD3DPass_SetTextureStage(v278, 4u, v293); /*0x8241ac*/
    v294 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v754); /*0x8241b9*/
    LOBYTE(v872) = 0x67; /*0x8241c6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v294); /*0x8241ce*/
    v295 = v754; /*0x8241d3*/
    LOBYTE(v872) = 1; /*0x8241dc*/
    if ( v754 ) /*0x8241e4*/
    {
      --v754[7].Unk08; /*0x8241e6*/
      if ( !v295[7].Unk08 ) /*0x8241ef*/
        sub_772560(v295); /*0x8241f3*/
    }
    v296 = (NiD3DTextureStage *)a3; /*0x8241f8*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x824202*/
    NiD3DTextureStage_SetTexture(v296, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x824213*/
    NiD3DPass_SetTextureStage(v278, 5u, &v296->Stage); /*0x82421d*/
    v297 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v842); /*0x82422a*/
    LOBYTE(v872) = 0x68; /*0x824237*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v297); /*0x82423f*/
    v298 = v842; /*0x824244*/
    LOBYTE(v872) = 1; /*0x82424d*/
    if ( v842 ) /*0x824255*/
    {
      --v842[7].Unk08; /*0x824257*/
      if ( !v298[7].Unk08 ) /*0x824260*/
        sub_772560(v298); /*0x824264*/
    }
    v299 = a3; /*0x824269*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x824274*/
    NiD3DPass_SetTextureStage(v278, 6u, v299); /*0x824281*/
    v300 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v756); /*0x82428e*/
    LOBYTE(v872) = 0x69; /*0x82429b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v300); /*0x8242a3*/
    v301 = v756; /*0x8242a8*/
    LOBYTE(v872) = 1; /*0x8242b1*/
    if ( v756 ) /*0x8242b9*/
    {
      --v756[7].Unk08; /*0x8242bb*/
      if ( !v301[7].Unk08 ) /*0x8242c4*/
        sub_772560(v301); /*0x8242c8*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8242cd*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8242d7*/
    NiD3DPass_SetTextureStage(v278, 7u, &v1->Stage); /*0x8242e4*/
  }
  NiD3DPass_SetVertexShader(v278, (NiD3DVertexShader *)unk_B45378); /*0x8242f2*/
  NiD3DPass_SetPixelShader(v278, (NiD3DPixelShader *)unk_B45150); /*0x8242ff*/
  if ( !v278->RenderStateGroup ) /*0x824304*/
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82430e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v278->RenderStateGroup, 0x1B, 0, 0); /*0x824318*/
  if ( !v278->RenderStateGroup ) /*0x82431d*/
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824327*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v278->RenderStateGroup, 0xF, 0, 0); /*0x824331*/
  if ( !v278->RenderStateGroup ) /*0x824336*/
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824340*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v278->RenderStateGroup, 7, 1, 0); /*0x82434b*/
  if ( !v278->RenderStateGroup ) /*0x824350*/
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82435a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v278->RenderStateGroup, 0x17, 4, 0); /*0x824365*/
  if ( !v278->RenderStateGroup ) /*0x82436a*/
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824374*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v278->RenderStateGroup, 0xE, 1, 0); /*0x82437f*/
  if ( !v278->RenderStateGroup ) /*0x824384*/
    v278->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82438e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v278->RenderStateGroup, 0x34, 0, 0); /*0x824398*/
  unk_B43D4C = 0x580F8; /*0x8243ab*/
  unk_B443DC = 0x10C; /*0x8243b1*/
  unk_B436BC = 0x18060; /*0x8243bb*/
  unk_B44A6C = 8; /*0x8243c5*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457D0); /*0x8243cf*/
  v302 = (NiD3DPass *)v651; /*0x8243d4*/
  if ( (unsigned int)v651[6] < 8 ) /*0x8243dc*/
  {
    v303 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v814); /*0x8243ea*/
    LOBYTE(v872) = 0x6A; /*0x8243f7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v303); /*0x8243ff*/
    v304 = v814; /*0x824404*/
    LOBYTE(v872) = 1; /*0x82440d*/
    if ( v814 ) /*0x824415*/
    {
      --v814[7].Unk08; /*0x824417*/
      if ( !v304[7].Unk08 ) /*0x824420*/
        sub_772560(v304); /*0x824424*/
    }
    v305 = a3; /*0x824429*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x824433*/
    NiD3DPass_SetTextureStage(v302, 0, v305); /*0x82443f*/
    v306 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v758); /*0x82444c*/
    LOBYTE(v872) = 0x6B; /*0x824459*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v306); /*0x824461*/
    v307 = v758; /*0x824466*/
    LOBYTE(v872) = 1; /*0x82446f*/
    if ( v758 ) /*0x824477*/
    {
      --v758[7].Unk08; /*0x824479*/
      if ( !v307[7].Unk08 ) /*0x824482*/
        sub_772560(v307); /*0x824486*/
    }
    v308 = a3; /*0x82448b*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x824496*/
    NiD3DPass_SetTextureStage(v302, 1u, v308); /*0x8244a3*/
    v309 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v864); /*0x8244b0*/
    LOBYTE(v872) = 0x6C; /*0x8244bd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v309); /*0x8244c5*/
    v310 = v864; /*0x8244ca*/
    LOBYTE(v872) = 1; /*0x8244d3*/
    if ( v864 ) /*0x8244db*/
    {
      --v864[7].Unk08; /*0x8244dd*/
      if ( !v310[7].Unk08 ) /*0x8244e6*/
        sub_772560(v310); /*0x8244ea*/
    }
    v311 = a3; /*0x8244ef*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8244fa*/
    NiD3DPass_SetTextureStage(v302, 2u, v311); /*0x824507*/
    v312 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v760); /*0x824514*/
    LOBYTE(v872) = 0x6D; /*0x824521*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v312); /*0x824529*/
    v313 = v760; /*0x82452e*/
    LOBYTE(v872) = 1; /*0x824537*/
    if ( v760 ) /*0x82453f*/
    {
      --v760[7].Unk08; /*0x824541*/
      if ( !v313[7].Unk08 ) /*0x82454a*/
        sub_772560(v313); /*0x82454e*/
    }
    v314 = a3; /*0x824553*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82455e*/
    NiD3DPass_SetTextureStage(v302, 3u, v314); /*0x82456b*/
    v315 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v652); /*0x824575*/
    LOBYTE(v872) = 0x6E; /*0x824582*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v315); /*0x82458a*/
    v316 = v652; /*0x82458f*/
    LOBYTE(v872) = 1; /*0x824595*/
    if ( v652 ) /*0x82459d*/
    {
      --v652[7].Unk08; /*0x82459f*/
      if ( !v316[7].Unk08 ) /*0x8245a8*/
        sub_772560(v316); /*0x8245ac*/
    }
    v317 = a3; /*0x8245b1*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8245bc*/
    NiD3DPass_SetTextureStage(v302, 4u, v317); /*0x8245c9*/
    v318 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v762); /*0x8245d6*/
    LOBYTE(v872) = 0x6F; /*0x8245e3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v318); /*0x8245eb*/
    v319 = v762; /*0x8245f0*/
    LOBYTE(v872) = 1; /*0x8245f9*/
    if ( v762 ) /*0x824601*/
    {
      --v762[7].Unk08; /*0x824603*/
      if ( !v319[7].Unk08 ) /*0x82460c*/
        sub_772560(v319); /*0x824610*/
    }
    v320 = (NiD3DTextureStage *)a3; /*0x824615*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82461f*/
    NiD3DTextureStage_SetTexture(v320, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x824630*/
    NiD3DPass_SetTextureStage(v302, 5u, &v320->Stage); /*0x82463a*/
    v321 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v653); /*0x824644*/
    LOBYTE(v872) = 0x70; /*0x824651*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v321); /*0x824659*/
    v322 = v653; /*0x82465e*/
    LOBYTE(v872) = 1; /*0x824664*/
    if ( v653 ) /*0x82466c*/
    {
      --v653[7].Unk08; /*0x82466e*/
      if ( !v322[7].Unk08 ) /*0x824677*/
        sub_772560(v322); /*0x82467b*/
    }
    v323 = a3; /*0x824680*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82468b*/
    NiD3DPass_SetTextureStage(v302, 6u, v323); /*0x824698*/
    v324 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v655); /*0x8246a2*/
    LOBYTE(v872) = 0x71; /*0x8246af*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v324); /*0x8246b7*/
    v325 = v655; /*0x8246bc*/
    LOBYTE(v872) = 1; /*0x8246c2*/
    if ( v655 ) /*0x8246ca*/
    {
      --v655[7].Unk08; /*0x8246cc*/
      if ( !v325[7].Unk08 ) /*0x8246d5*/
        sub_772560(v325); /*0x8246d9*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8246de*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8246e8*/
    NiD3DPass_SetTextureStage(v302, 7u, &v1->Stage); /*0x8246f5*/
  }
  NiD3DPass_SetVertexShader(v302, (NiD3DVertexShader *)unk_B45378); /*0x824703*/
  NiD3DPass_SetPixelShader(v302, (NiD3DPixelShader *)unk_B45158); /*0x824711*/
  if ( !v302->RenderStateGroup ) /*0x824716*/
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824720*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v302->RenderStateGroup, 0x1B, 0, 0); /*0x82472a*/
  if ( !v302->RenderStateGroup ) /*0x82472f*/
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824739*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v302->RenderStateGroup, 0xF, 0, 0); /*0x824743*/
  if ( !v302->RenderStateGroup ) /*0x824748*/
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824752*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v302->RenderStateGroup, 7, 1, 0); /*0x82475d*/
  if ( !v302->RenderStateGroup ) /*0x824762*/
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82476c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v302->RenderStateGroup, 0x17, 4, 0); /*0x824777*/
  if ( !v302->RenderStateGroup ) /*0x82477c*/
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824786*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v302->RenderStateGroup, 0xE, 1, 0); /*0x824791*/
  if ( !v302->RenderStateGroup ) /*0x824796*/
    v302->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8247a0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v302->RenderStateGroup, 0x34, 0, 0); /*0x8247aa*/
  unk_B43D50 = 0x580F8; /*0x8247b8*/
  unk_B443E0 = 0x18C; /*0x8247be*/
  unk_B436C0 = 0x18060; /*0x8247c8*/
  unk_B44A70 = 0xC; /*0x8247d2*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457E4); /*0x8247dc*/
  v326 = (NiD3DPass *)v651; /*0x8247e1*/
  if ( (unsigned int)v651[6] < 8 ) /*0x8247e9*/
  {
    v327 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v657); /*0x8247f4*/
    LOBYTE(v872) = 0x72; /*0x824801*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v327); /*0x824809*/
    v328 = v657; /*0x82480e*/
    LOBYTE(v872) = 1; /*0x824814*/
    if ( v657 ) /*0x82481c*/
    {
      --v657[7].Unk08; /*0x82481e*/
      if ( !v328[7].Unk08 ) /*0x824827*/
        sub_772560(v328); /*0x82482b*/
    }
    v329 = a3; /*0x824830*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82483a*/
    NiD3DPass_SetTextureStage(v326, 0, v329); /*0x824846*/
    v330 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v659); /*0x824850*/
    LOBYTE(v872) = 0x73; /*0x82485d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v330); /*0x824865*/
    v331 = v659; /*0x82486a*/
    LOBYTE(v872) = 1; /*0x824870*/
    if ( v659 ) /*0x824878*/
    {
      --v659[7].Unk08; /*0x82487a*/
      if ( !v331[7].Unk08 ) /*0x824883*/
        sub_772560(v331); /*0x824887*/
    }
    v332 = a3; /*0x82488c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x824897*/
    NiD3DPass_SetTextureStage(v326, 1u, v332); /*0x8248a4*/
    v333 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v661); /*0x8248ae*/
    LOBYTE(v872) = 0x74; /*0x8248bb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v333); /*0x8248c3*/
    v334 = v661; /*0x8248c8*/
    LOBYTE(v872) = 1; /*0x8248ce*/
    if ( v661 ) /*0x8248d6*/
    {
      --v661[7].Unk08; /*0x8248d8*/
      if ( !v334[7].Unk08 ) /*0x8248e1*/
        sub_772560(v334); /*0x8248e5*/
    }
    v335 = a3; /*0x8248ea*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8248f5*/
    NiD3DPass_SetTextureStage(v326, 2u, v335); /*0x824902*/
    v336 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v663); /*0x82490c*/
    LOBYTE(v872) = 0x75; /*0x824919*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v336); /*0x824921*/
    v337 = v663; /*0x824926*/
    LOBYTE(v872) = 1; /*0x82492c*/
    if ( v663 ) /*0x824934*/
    {
      --v663[7].Unk08; /*0x824936*/
      if ( !v337[7].Unk08 ) /*0x82493f*/
        sub_772560(v337); /*0x824943*/
    }
    v338 = a3; /*0x824948*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x824953*/
    NiD3DPass_SetTextureStage(v326, 3u, v338); /*0x824960*/
    v339 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v665); /*0x82496a*/
    LOBYTE(v872) = 0x76; /*0x824977*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v339); /*0x82497f*/
    v340 = v665; /*0x824984*/
    LOBYTE(v872) = 1; /*0x82498a*/
    if ( v665 ) /*0x824992*/
    {
      --v665[7].Unk08; /*0x824994*/
      if ( !v340[7].Unk08 ) /*0x82499d*/
        sub_772560(v340); /*0x8249a1*/
    }
    v341 = a3; /*0x8249a6*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8249b1*/
    NiD3DPass_SetTextureStage(v326, 4u, v341); /*0x8249be*/
    v342 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v667); /*0x8249c8*/
    LOBYTE(v872) = 0x77; /*0x8249d5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v342); /*0x8249dd*/
    v343 = v667; /*0x8249e2*/
    LOBYTE(v872) = 1; /*0x8249e8*/
    if ( v667 ) /*0x8249f0*/
    {
      --v667[7].Unk08; /*0x8249f2*/
      if ( !v343[7].Unk08 ) /*0x8249fb*/
        sub_772560(v343); /*0x8249ff*/
    }
    v344 = (NiD3DTextureStage *)a3; /*0x824a04*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x824a0e*/
    NiD3DTextureStage_SetTexture(v344, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x824a1e*/
    NiD3DPass_SetTextureStage(v326, 5u, &v344->Stage); /*0x824a28*/
    v345 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v669); /*0x824a32*/
    LOBYTE(v872) = 0x78; /*0x824a3f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v345); /*0x824a47*/
    v346 = v669; /*0x824a4c*/
    LOBYTE(v872) = 1; /*0x824a52*/
    if ( v669 ) /*0x824a5a*/
    {
      --v669[7].Unk08; /*0x824a5c*/
      if ( !v346[7].Unk08 ) /*0x824a65*/
        sub_772560(v346); /*0x824a69*/
    }
    v347 = a3; /*0x824a6e*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x824a79*/
    NiD3DPass_SetTextureStage(v326, 6u, v347); /*0x824a86*/
    v348 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v671); /*0x824a90*/
    LOBYTE(v872) = 0x79; /*0x824a9d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v348); /*0x824aa5*/
    v349 = v671; /*0x824aaa*/
    LOBYTE(v872) = 1; /*0x824ab0*/
    if ( v671 ) /*0x824ab8*/
    {
      --v671[7].Unk08; /*0x824aba*/
      if ( !v349[7].Unk08 ) /*0x824ac3*/
        sub_772560(v349); /*0x824ac7*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x824acc*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x824ad6*/
    NiD3DPass_SetTextureStage(v326, 7u, &v1->Stage); /*0x824ae3*/
  }
  NiD3DPass_SetVertexShader(v326, (NiD3DVertexShader *)unk_B45378); /*0x824af0*/
  NiD3DPass_SetPixelShader(v326, (NiD3DPixelShader *)unk_B45164); /*0x824afe*/
  if ( !v326->RenderStateGroup ) /*0x824b03*/
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824b0d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v326->RenderStateGroup, 0x1B, 0, 0); /*0x824b17*/
  if ( !v326->RenderStateGroup ) /*0x824b1c*/
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824b26*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v326->RenderStateGroup, 0xF, 0, 0); /*0x824b30*/
  if ( !v326->RenderStateGroup ) /*0x824b35*/
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824b3f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v326->RenderStateGroup, 7, 1, 0); /*0x824b4a*/
  if ( !v326->RenderStateGroup ) /*0x824b4f*/
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824b59*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v326->RenderStateGroup, 0x17, 4, 0); /*0x824b64*/
  if ( !v326->RenderStateGroup ) /*0x824b69*/
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824b73*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v326->RenderStateGroup, 0xE, 1, 0); /*0x824b7e*/
  if ( !v326->RenderStateGroup ) /*0x824b83*/
    v326->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824b8d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v326->RenderStateGroup, 0x34, 0, 0); /*0x824b97*/
  unk_B43D64 = 0x580F8; /*0x824ba5*/
  unk_B443F4 = 0x18C; /*0x824bab*/
  unk_B436D4 = 0x18060; /*0x824bb5*/
  unk_B44A84 = 0xC; /*0x824bbf*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457E8); /*0x824bc9*/
  v350 = (NiD3DPass *)v651; /*0x824bce*/
  if ( (unsigned int)v651[6] < 8 ) /*0x824bd6*/
  {
    v351 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v673); /*0x824be1*/
    LOBYTE(v872) = 0x7A; /*0x824bee*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v351); /*0x824bf6*/
    v352 = v673; /*0x824bfb*/
    LOBYTE(v872) = 1; /*0x824c01*/
    if ( v673 ) /*0x824c09*/
    {
      --v673[7].Unk08; /*0x824c0b*/
      if ( !v352[7].Unk08 ) /*0x824c14*/
        sub_772560(v352); /*0x824c18*/
    }
    v353 = a3; /*0x824c1d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x824c27*/
    NiD3DPass_SetTextureStage(v350, 0, v353); /*0x824c33*/
    v354 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v675); /*0x824c3d*/
    LOBYTE(v872) = 0x7B; /*0x824c4a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v354); /*0x824c52*/
    v355 = v675; /*0x824c57*/
    LOBYTE(v872) = 1; /*0x824c5d*/
    if ( v675 ) /*0x824c65*/
    {
      --v675[7].Unk08; /*0x824c67*/
      if ( !v355[7].Unk08 ) /*0x824c70*/
        sub_772560(v355); /*0x824c74*/
    }
    v356 = a3; /*0x824c79*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x824c84*/
    NiD3DPass_SetTextureStage(v350, 1u, v356); /*0x824c91*/
    v357 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v677); /*0x824c9e*/
    LOBYTE(v872) = 0x7C; /*0x824cab*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v357); /*0x824cb3*/
    v358 = v677; /*0x824cb8*/
    LOBYTE(v872) = 1; /*0x824cc1*/
    if ( v677 ) /*0x824cc9*/
    {
      --v677[7].Unk08; /*0x824ccb*/
      if ( !v358[7].Unk08 ) /*0x824cd4*/
        sub_772560(v358); /*0x824cd8*/
    }
    v359 = a3; /*0x824cdd*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x824ce8*/
    NiD3DPass_SetTextureStage(v350, 2u, v359); /*0x824cf5*/
    v360 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v679); /*0x824d02*/
    LOBYTE(v872) = 0x7D; /*0x824d0f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v360); /*0x824d17*/
    v361 = v679; /*0x824d1c*/
    LOBYTE(v872) = 1; /*0x824d25*/
    if ( v679 ) /*0x824d2d*/
    {
      --v679[7].Unk08; /*0x824d2f*/
      if ( !v361[7].Unk08 ) /*0x824d38*/
        sub_772560(v361); /*0x824d3c*/
    }
    v362 = a3; /*0x824d41*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x824d4c*/
    NiD3DPass_SetTextureStage(v350, 3u, v362); /*0x824d59*/
    v363 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v681); /*0x824d66*/
    LOBYTE(v872) = 0x7E; /*0x824d73*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v363); /*0x824d7b*/
    v364 = v681; /*0x824d80*/
    LOBYTE(v872) = 1; /*0x824d89*/
    if ( v681 ) /*0x824d91*/
    {
      --v681[7].Unk08; /*0x824d93*/
      if ( !v364[7].Unk08 ) /*0x824d9c*/
        sub_772560(v364); /*0x824da0*/
    }
    v365 = a3; /*0x824da5*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x824db0*/
    NiD3DPass_SetTextureStage(v350, 4u, v365); /*0x824dbd*/
    v366 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v683); /*0x824dca*/
    LOBYTE(v872) = 0x7F; /*0x824dd7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v366); /*0x824ddf*/
    v367 = v683; /*0x824de4*/
    LOBYTE(v872) = 1; /*0x824ded*/
    if ( v683 ) /*0x824df5*/
    {
      --v683[7].Unk08; /*0x824df7*/
      if ( !v367[7].Unk08 ) /*0x824e00*/
        sub_772560(v367); /*0x824e04*/
    }
    v368 = (NiD3DTextureStage *)a3; /*0x824e09*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x824e13*/
    NiD3DTextureStage_SetTexture(v368, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x824e24*/
    NiD3DPass_SetTextureStage(v350, 5u, &v368->Stage); /*0x824e2e*/
    v369 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v685); /*0x824e3b*/
    LOBYTE(v872) = 0x80; /*0x824e48*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v369); /*0x824e50*/
    v370 = v685; /*0x824e55*/
    LOBYTE(v872) = 1; /*0x824e5e*/
    if ( v685 ) /*0x824e66*/
    {
      --v685[7].Unk08; /*0x824e68*/
      if ( !v370[7].Unk08 ) /*0x824e71*/
        sub_772560(v370); /*0x824e75*/
    }
    v371 = a3; /*0x824e7a*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x824e85*/
    NiD3DPass_SetTextureStage(v350, 6u, v371); /*0x824e92*/
    v372 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v687); /*0x824e9f*/
    LOBYTE(v872) = 0x81; /*0x824eac*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v372); /*0x824eb4*/
    v373 = v687; /*0x824eb9*/
    LOBYTE(v872) = 1; /*0x824ec2*/
    if ( v687 ) /*0x824eca*/
    {
      --v687[7].Unk08; /*0x824ecc*/
      if ( !v373[7].Unk08 ) /*0x824ed5*/
        sub_772560(v373); /*0x824ed9*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x824ede*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x824ee8*/
    NiD3DPass_SetTextureStage(v350, 7u, &v1->Stage); /*0x824ef5*/
  }
  NiD3DPass_SetVertexShader(v350, (NiD3DVertexShader *)unk_B45380); /*0x824f03*/
  NiD3DPass_SetPixelShader(v350, (NiD3DPixelShader *)unk_B45168); /*0x824f10*/
  if ( !v350->RenderStateGroup ) /*0x824f15*/
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824f1f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v350->RenderStateGroup, 0x1B, 0, 0); /*0x824f29*/
  if ( !v350->RenderStateGroup ) /*0x824f2e*/
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824f38*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v350->RenderStateGroup, 0xF, 0, 0); /*0x824f42*/
  if ( !v350->RenderStateGroup ) /*0x824f47*/
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824f51*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v350->RenderStateGroup, 7, 1, 0); /*0x824f5c*/
  if ( !v350->RenderStateGroup ) /*0x824f61*/
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824f6b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v350->RenderStateGroup, 0x17, 4, 0); /*0x824f76*/
  if ( !v350->RenderStateGroup ) /*0x824f7b*/
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824f85*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v350->RenderStateGroup, 0xE, 1, 0); /*0x824f90*/
  if ( !v350->RenderStateGroup ) /*0x824f95*/
    v350->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x824f9f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v350->RenderStateGroup, 0x34, 0, 0); /*0x824fa9*/
  unk_B43D68 = 0x19082; /*0x824fbc*/
  unk_B443F8 = 0x11C; /*0x824fc2*/
  unk_B436D8 = 0x18000; /*0x824fcc*/
  unk_B44A88 = 8; /*0x824fd6*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457EC); /*0x824fe0*/
  v374 = (NiD3DPass *)v651; /*0x824fe5*/
  if ( (unsigned int)v651[6] < 8 ) /*0x824fed*/
  {
    v375 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v689); /*0x824ffb*/
    LOBYTE(v872) = 0x82; /*0x825008*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v375); /*0x825010*/
    v376 = v689; /*0x825015*/
    LOBYTE(v872) = 1; /*0x82501e*/
    if ( v689 ) /*0x825026*/
    {
      --v689[7].Unk08; /*0x825028*/
      if ( !v376[7].Unk08 ) /*0x825031*/
        sub_772560(v376); /*0x825035*/
    }
    v377 = a3; /*0x82503a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x825044*/
    NiD3DPass_SetTextureStage(v374, 0, v377); /*0x825050*/
    v378 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v691); /*0x82505d*/
    LOBYTE(v872) = 0x83; /*0x82506a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v378); /*0x825072*/
    v379 = v691; /*0x825077*/
    LOBYTE(v872) = 1; /*0x825080*/
    if ( v691 ) /*0x825088*/
    {
      --v691[7].Unk08; /*0x82508a*/
      if ( !v379[7].Unk08 ) /*0x825093*/
        sub_772560(v379); /*0x825097*/
    }
    v380 = a3; /*0x82509c*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8250a7*/
    NiD3DPass_SetTextureStage(v374, 1u, v380); /*0x8250b4*/
    v381 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v693); /*0x8250c1*/
    LOBYTE(v872) = 0x84; /*0x8250ce*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v381); /*0x8250d6*/
    v382 = v693; /*0x8250db*/
    LOBYTE(v872) = 1; /*0x8250e4*/
    if ( v693 ) /*0x8250ec*/
    {
      --v693[7].Unk08; /*0x8250ee*/
      if ( !v382[7].Unk08 ) /*0x8250f7*/
        sub_772560(v382); /*0x8250fb*/
    }
    v383 = a3; /*0x825100*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82510b*/
    NiD3DPass_SetTextureStage(v374, 2u, v383); /*0x825118*/
    v384 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v695); /*0x825125*/
    LOBYTE(v872) = 0x85; /*0x825132*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v384); /*0x82513a*/
    v385 = v695; /*0x82513f*/
    LOBYTE(v872) = 1; /*0x825148*/
    if ( v695 ) /*0x825150*/
    {
      --v695[7].Unk08; /*0x825152*/
      if ( !v385[7].Unk08 ) /*0x82515b*/
        sub_772560(v385); /*0x82515f*/
    }
    v386 = a3; /*0x825164*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82516f*/
    NiD3DPass_SetTextureStage(v374, 3u, v386); /*0x82517c*/
    v387 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v697); /*0x825189*/
    LOBYTE(v872) = 0x86; /*0x825196*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v387); /*0x82519e*/
    v388 = v697; /*0x8251a3*/
    LOBYTE(v872) = 1; /*0x8251ac*/
    if ( v697 ) /*0x8251b4*/
    {
      --v697[7].Unk08; /*0x8251b6*/
      if ( !v388[7].Unk08 ) /*0x8251bf*/
        sub_772560(v388); /*0x8251c3*/
    }
    v389 = a3; /*0x8251c8*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8251d3*/
    NiD3DPass_SetTextureStage(v374, 4u, v389); /*0x8251e0*/
    v390 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v699); /*0x8251ed*/
    LOBYTE(v872) = 0x87; /*0x8251fa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v390); /*0x825202*/
    v391 = v699; /*0x825207*/
    LOBYTE(v872) = 1; /*0x825210*/
    if ( v699 ) /*0x825218*/
    {
      --v699[7].Unk08; /*0x82521a*/
      if ( !v391[7].Unk08 ) /*0x825223*/
        sub_772560(v391); /*0x825227*/
    }
    v392 = (NiD3DTextureStage *)a3; /*0x82522c*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x825236*/
    NiD3DTextureStage_SetTexture(v392, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x825247*/
    NiD3DPass_SetTextureStage(v374, 5u, &v392->Stage); /*0x825251*/
    v393 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v701); /*0x82525e*/
    LOBYTE(v872) = 0x88; /*0x82526b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v393); /*0x825273*/
    v394 = v701; /*0x825278*/
    LOBYTE(v872) = 1; /*0x825281*/
    if ( v701 ) /*0x825289*/
    {
      --v701[7].Unk08; /*0x82528b*/
      if ( !v394[7].Unk08 ) /*0x825294*/
        sub_772560(v394); /*0x825298*/
    }
    v395 = a3; /*0x82529d*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8252a8*/
    NiD3DPass_SetTextureStage(v374, 6u, v395); /*0x8252b5*/
    v396 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v703); /*0x8252c2*/
    LOBYTE(v872) = 0x89; /*0x8252cf*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v396); /*0x8252d7*/
    v397 = v703; /*0x8252dc*/
    LOBYTE(v872) = 1; /*0x8252e5*/
    if ( v703 ) /*0x8252ed*/
    {
      --v703[7].Unk08; /*0x8252ef*/
      if ( !v397[7].Unk08 ) /*0x8252f8*/
        sub_772560(v397); /*0x8252fc*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x825301*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82530b*/
    NiD3DPass_SetTextureStage(v374, 7u, &v1->Stage); /*0x825318*/
  }
  NiD3DPass_SetVertexShader(v374, (NiD3DVertexShader *)unk_B45380); /*0x825326*/
  NiD3DPass_SetPixelShader(v374, (NiD3DPixelShader *)unk_B4516C); /*0x825334*/
  if ( !v374->RenderStateGroup ) /*0x825339*/
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825343*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v374->RenderStateGroup, 0x1B, 0, 0); /*0x82534d*/
  if ( !v374->RenderStateGroup ) /*0x825352*/
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82535c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v374->RenderStateGroup, 0xF, 0, 0); /*0x825366*/
  if ( !v374->RenderStateGroup ) /*0x82536b*/
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825375*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v374->RenderStateGroup, 7, 1, 0); /*0x825380*/
  if ( !v374->RenderStateGroup ) /*0x825385*/
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82538f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v374->RenderStateGroup, 0x17, 4, 0); /*0x82539a*/
  if ( !v374->RenderStateGroup ) /*0x82539f*/
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8253a9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v374->RenderStateGroup, 0xE, 1, 0); /*0x8253b4*/
  if ( !v374->RenderStateGroup ) /*0x8253b9*/
    v374->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8253c3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v374->RenderStateGroup, 0x34, 0, 0); /*0x8253cd*/
  unk_B43D6C = 0x19082; /*0x8253db*/
  unk_B443FC = 0x19C; /*0x8253e1*/
  unk_B436DC = 0x18000; /*0x8253eb*/
  unk_B44A8C = 0xC; /*0x8253f5*/
  sub_76C890((NiD3DPass **)&v651, &unk_B457FC); /*0x8253ff*/
  v398 = (NiD3DPass *)v651; /*0x825404*/
  if ( (unsigned int)v651[6] < 8 ) /*0x82540c*/
  {
    v399 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v705); /*0x82541a*/
    LOBYTE(v872) = 0x8A; /*0x825427*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v399); /*0x82542f*/
    v400 = v705; /*0x825434*/
    LOBYTE(v872) = 1; /*0x82543d*/
    if ( v705 ) /*0x825445*/
    {
      --v705[7].Unk08; /*0x825447*/
      if ( !v400[7].Unk08 ) /*0x825450*/
        sub_772560(v400); /*0x825454*/
    }
    v401 = a3; /*0x825459*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x825463*/
    NiD3DPass_SetTextureStage(v398, 0, v401); /*0x82546f*/
    v402 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v707); /*0x82547c*/
    LOBYTE(v872) = 0x8B; /*0x825489*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v402); /*0x825491*/
    v403 = v707; /*0x825496*/
    LOBYTE(v872) = 1; /*0x82549f*/
    if ( v707 ) /*0x8254a7*/
    {
      --v707[7].Unk08; /*0x8254a9*/
      if ( !v403[7].Unk08 ) /*0x8254b2*/
        sub_772560(v403); /*0x8254b6*/
    }
    v404 = a3; /*0x8254bb*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8254c6*/
    NiD3DPass_SetTextureStage(v398, 1u, v404); /*0x8254d3*/
    v405 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v709); /*0x8254e0*/
    LOBYTE(v872) = 0x8C; /*0x8254ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v405); /*0x8254f5*/
    v406 = v709; /*0x8254fa*/
    LOBYTE(v872) = 1; /*0x825503*/
    if ( v709 ) /*0x82550b*/
    {
      --v709[7].Unk08; /*0x82550d*/
      if ( !v406[7].Unk08 ) /*0x825516*/
        sub_772560(v406); /*0x82551a*/
    }
    v407 = a3; /*0x82551f*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82552a*/
    NiD3DPass_SetTextureStage(v398, 2u, v407); /*0x825537*/
    v408 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v711); /*0x825544*/
    LOBYTE(v872) = 0x8D; /*0x825551*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v408); /*0x825559*/
    v409 = v711; /*0x82555e*/
    LOBYTE(v872) = 1; /*0x825567*/
    if ( v711 ) /*0x82556f*/
    {
      --v711[7].Unk08; /*0x825571*/
      if ( !v409[7].Unk08 ) /*0x82557a*/
        sub_772560(v409); /*0x82557e*/
    }
    v410 = a3; /*0x825583*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82558e*/
    NiD3DPass_SetTextureStage(v398, 3u, v410); /*0x82559b*/
    v411 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v713); /*0x8255a8*/
    LOBYTE(v872) = 0x8E; /*0x8255b5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v411); /*0x8255bd*/
    v412 = v713; /*0x8255c2*/
    LOBYTE(v872) = 1; /*0x8255cb*/
    if ( v713 ) /*0x8255d3*/
    {
      --v713[7].Unk08; /*0x8255d5*/
      if ( !v412[7].Unk08 ) /*0x8255de*/
        sub_772560(v412); /*0x8255e2*/
    }
    v413 = a3; /*0x8255e7*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8255f2*/
    NiD3DPass_SetTextureStage(v398, 4u, v413); /*0x8255ff*/
    v414 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v715); /*0x82560c*/
    LOBYTE(v872) = 0x8F; /*0x825619*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v414); /*0x825621*/
    v415 = v715; /*0x825626*/
    LOBYTE(v872) = 1; /*0x82562f*/
    if ( v715 ) /*0x825637*/
    {
      --v715[7].Unk08; /*0x825639*/
      if ( !v415[7].Unk08 ) /*0x825642*/
        sub_772560(v415); /*0x825646*/
    }
    v416 = (NiD3DTextureStage *)a3; /*0x82564b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x825655*/
    NiD3DTextureStage_SetTexture(v416, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x825665*/
    NiD3DPass_SetTextureStage(v398, 5u, &v416->Stage); /*0x82566f*/
    v417 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v717); /*0x82567c*/
    LOBYTE(v872) = 0x90; /*0x825689*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v417); /*0x825691*/
    v418 = v717; /*0x825696*/
    LOBYTE(v872) = 1; /*0x82569f*/
    if ( v717 ) /*0x8256a7*/
    {
      --v717[7].Unk08; /*0x8256a9*/
      if ( !v418[7].Unk08 ) /*0x8256b2*/
        sub_772560(v418); /*0x8256b6*/
    }
    v419 = a3; /*0x8256bb*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8256c6*/
    NiD3DPass_SetTextureStage(v398, 6u, v419); /*0x8256d3*/
    v420 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v719); /*0x8256e0*/
    LOBYTE(v872) = 0x91; /*0x8256ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v420); /*0x8256f5*/
    v421 = v719; /*0x8256fa*/
    LOBYTE(v872) = 1; /*0x825703*/
    if ( v719 ) /*0x82570b*/
    {
      --v719[7].Unk08; /*0x82570d*/
      if ( !v421[7].Unk08 ) /*0x825716*/
        sub_772560(v421); /*0x82571a*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82571f*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x825729*/
    NiD3DPass_SetTextureStage(v398, 7u, &v1->Stage); /*0x825736*/
  }
  NiD3DPass_SetVertexShader(v398, (NiD3DVertexShader *)unk_B45380); /*0x825743*/
  NiD3DPass_SetPixelShader(v398, (NiD3DPixelShader *)unk_B45170); /*0x825751*/
  if ( !v398->RenderStateGroup ) /*0x825756*/
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825760*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v398->RenderStateGroup, 0x1B, 0, 0); /*0x82576a*/
  if ( !v398->RenderStateGroup ) /*0x82576f*/
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825779*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v398->RenderStateGroup, 0xF, 0, 0); /*0x825783*/
  if ( !v398->RenderStateGroup ) /*0x825788*/
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825792*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v398->RenderStateGroup, 7, 1, 0); /*0x82579d*/
  if ( !v398->RenderStateGroup ) /*0x8257a2*/
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8257ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v398->RenderStateGroup, 0x17, 4, 0); /*0x8257b7*/
  if ( !v398->RenderStateGroup ) /*0x8257bc*/
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8257c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v398->RenderStateGroup, 0xE, 1, 0); /*0x8257d1*/
  if ( !v398->RenderStateGroup ) /*0x8257d6*/
    v398->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8257e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v398->RenderStateGroup, 0x34, 0, 0); /*0x8257ea*/
  unk_B43D7C = 0x19082; /*0x8257f8*/
  unk_B4440C = 0x19C; /*0x8257fe*/
  unk_B436EC = 0x18000; /*0x825808*/
  unk_B44A9C = 0xC; /*0x825812*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45800); /*0x82581c*/
  v422 = (NiD3DPass *)v651; /*0x825821*/
  if ( (unsigned int)v651[6] < 8 ) /*0x825829*/
  {
    v423 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v721); /*0x825837*/
    LOBYTE(v872) = 0x92; /*0x825844*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v423); /*0x82584c*/
    v424 = v721; /*0x825851*/
    LOBYTE(v872) = 1; /*0x82585a*/
    if ( v721 ) /*0x825862*/
    {
      --v721[7].Unk08; /*0x825864*/
      if ( !v424[7].Unk08 ) /*0x82586d*/
        sub_772560(v424); /*0x825871*/
    }
    v425 = a3; /*0x825876*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x825880*/
    NiD3DPass_SetTextureStage(v422, 0, v425); /*0x82588c*/
    v426 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v723); /*0x825899*/
    LOBYTE(v872) = 0x93; /*0x8258a6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v426); /*0x8258ae*/
    v427 = v723; /*0x8258b3*/
    LOBYTE(v872) = 1; /*0x8258bc*/
    if ( v723 ) /*0x8258c4*/
    {
      --v723[7].Unk08; /*0x8258c6*/
      if ( !v427[7].Unk08 ) /*0x8258cf*/
        sub_772560(v427); /*0x8258d3*/
    }
    v428 = a3; /*0x8258d8*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8258e3*/
    NiD3DPass_SetTextureStage(v422, 1u, v428); /*0x8258f0*/
    v429 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v725); /*0x8258fd*/
    LOBYTE(v872) = 0x94; /*0x82590a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v429); /*0x825912*/
    v430 = v725; /*0x825917*/
    LOBYTE(v872) = 1; /*0x825920*/
    if ( v725 ) /*0x825928*/
    {
      --v725[7].Unk08; /*0x82592a*/
      if ( !v430[7].Unk08 ) /*0x825933*/
        sub_772560(v430); /*0x825937*/
    }
    v431 = a3; /*0x82593c*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x825947*/
    NiD3DPass_SetTextureStage(v422, 2u, v431); /*0x825954*/
    v432 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v727); /*0x825961*/
    LOBYTE(v872) = 0x95; /*0x82596e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v432); /*0x825976*/
    v433 = v727; /*0x82597b*/
    LOBYTE(v872) = 1; /*0x825984*/
    if ( v727 ) /*0x82598c*/
    {
      --v727[7].Unk08; /*0x82598e*/
      if ( !v433[7].Unk08 ) /*0x825997*/
        sub_772560(v433); /*0x82599b*/
    }
    v434 = a3; /*0x8259a0*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8259ab*/
    NiD3DPass_SetTextureStage(v422, 3u, v434); /*0x8259b8*/
    v435 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v729); /*0x8259c5*/
    LOBYTE(v872) = 0x96; /*0x8259d2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v435); /*0x8259da*/
    v436 = v729; /*0x8259df*/
    LOBYTE(v872) = 1; /*0x8259e8*/
    if ( v729 ) /*0x8259f0*/
    {
      --v729[7].Unk08; /*0x8259f2*/
      if ( !v436[7].Unk08 ) /*0x8259fb*/
        sub_772560(v436); /*0x8259ff*/
    }
    v437 = a3; /*0x825a04*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x825a0f*/
    NiD3DPass_SetTextureStage(v422, 4u, v437); /*0x825a1c*/
    v438 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v731); /*0x825a29*/
    LOBYTE(v872) = 0x97; /*0x825a36*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v438); /*0x825a3e*/
    v439 = v731; /*0x825a43*/
    LOBYTE(v872) = 1; /*0x825a4c*/
    if ( v731 ) /*0x825a54*/
    {
      --v731[7].Unk08; /*0x825a56*/
      if ( !v439[7].Unk08 ) /*0x825a5f*/
        sub_772560(v439); /*0x825a63*/
    }
    v440 = (NiD3DTextureStage *)a3; /*0x825a68*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x825a72*/
    NiD3DTextureStage_SetTexture(v440, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x825a83*/
    NiD3DPass_SetTextureStage(v422, 5u, &v440->Stage); /*0x825a8d*/
    v441 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v733); /*0x825a9a*/
    LOBYTE(v872) = 0x98; /*0x825aa7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v441); /*0x825aaf*/
    v442 = v733; /*0x825ab4*/
    LOBYTE(v872) = 1; /*0x825abd*/
    if ( v733 ) /*0x825ac5*/
    {
      --v733[7].Unk08; /*0x825ac7*/
      if ( !v442[7].Unk08 ) /*0x825ad0*/
        sub_772560(v442); /*0x825ad4*/
    }
    v443 = a3; /*0x825ad9*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x825ae4*/
    NiD3DPass_SetTextureStage(v422, 6u, v443); /*0x825af1*/
    v444 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v735); /*0x825afe*/
    LOBYTE(v872) = 0x99; /*0x825b0b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v444); /*0x825b13*/
    v445 = v735; /*0x825b18*/
    LOBYTE(v872) = 1; /*0x825b21*/
    if ( v735 ) /*0x825b29*/
    {
      --v735[7].Unk08; /*0x825b2b*/
      if ( !v445[7].Unk08 ) /*0x825b34*/
        sub_772560(v445); /*0x825b38*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x825b3d*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x825b47*/
    NiD3DPass_SetTextureStage(v422, 7u, &v1->Stage); /*0x825b54*/
  }
  NiD3DPass_SetVertexShader(v422, (NiD3DVertexShader *)unk_B45384); /*0x825b62*/
  NiD3DPass_SetPixelShader(v422, (NiD3DPixelShader *)unk_B45168); /*0x825b6f*/
  if ( !v422->RenderStateGroup ) /*0x825b74*/
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825b7e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v422->RenderStateGroup, 0x1B, 0, 0); /*0x825b88*/
  if ( !v422->RenderStateGroup ) /*0x825b8d*/
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825b97*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v422->RenderStateGroup, 0xF, 0, 0); /*0x825ba1*/
  if ( !v422->RenderStateGroup ) /*0x825ba6*/
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825bb0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v422->RenderStateGroup, 7, 1, 0); /*0x825bbb*/
  if ( !v422->RenderStateGroup ) /*0x825bc0*/
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825bca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v422->RenderStateGroup, 0x17, 4, 0); /*0x825bd5*/
  if ( !v422->RenderStateGroup ) /*0x825bda*/
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825be4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v422->RenderStateGroup, 0xE, 1, 0); /*0x825bef*/
  if ( !v422->RenderStateGroup ) /*0x825bf4*/
    v422->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825bfe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v422->RenderStateGroup, 0x34, 0, 0); /*0x825c08*/
  unk_B43D80 = 0x59088; /*0x825c1b*/
  unk_B44410 = 0x11C; /*0x825c21*/
  unk_B436F0 = 0x18000; /*0x825c2b*/
  unk_B44AA0 = 8; /*0x825c35*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45804); /*0x825c3f*/
  v446 = (NiD3DPass *)v651; /*0x825c44*/
  if ( (unsigned int)v651[6] < 8 ) /*0x825c4c*/
  {
    v447 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v737); /*0x825c5a*/
    LOBYTE(v872) = 0x9A; /*0x825c67*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v447); /*0x825c6f*/
    v448 = v737; /*0x825c74*/
    LOBYTE(v872) = 1; /*0x825c7d*/
    if ( v737 ) /*0x825c85*/
    {
      --v737[7].Unk08; /*0x825c87*/
      if ( !v448[7].Unk08 ) /*0x825c90*/
        sub_772560(v448); /*0x825c94*/
    }
    v449 = a3; /*0x825c99*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x825ca3*/
    NiD3DPass_SetTextureStage(v446, 0, v449); /*0x825caf*/
    v450 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v739); /*0x825cbc*/
    LOBYTE(v872) = 0x9B; /*0x825cc9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v450); /*0x825cd1*/
    v451 = v739; /*0x825cd6*/
    LOBYTE(v872) = 1; /*0x825cdf*/
    if ( v739 ) /*0x825ce7*/
    {
      --v739[7].Unk08; /*0x825ce9*/
      if ( !v451[7].Unk08 ) /*0x825cf2*/
        sub_772560(v451); /*0x825cf6*/
    }
    v452 = a3; /*0x825cfb*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x825d06*/
    NiD3DPass_SetTextureStage(v446, 1u, v452); /*0x825d13*/
    v453 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v741); /*0x825d20*/
    LOBYTE(v872) = 0x9C; /*0x825d2d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v453); /*0x825d35*/
    v454 = v741; /*0x825d3a*/
    LOBYTE(v872) = 1; /*0x825d43*/
    if ( v741 ) /*0x825d4b*/
    {
      --v741[7].Unk08; /*0x825d4d*/
      if ( !v454[7].Unk08 ) /*0x825d56*/
        sub_772560(v454); /*0x825d5a*/
    }
    v455 = a3; /*0x825d5f*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x825d6a*/
    NiD3DPass_SetTextureStage(v446, 2u, v455); /*0x825d77*/
    v456 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v743); /*0x825d84*/
    LOBYTE(v872) = 0x9D; /*0x825d91*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v456); /*0x825d99*/
    v457 = v743; /*0x825d9e*/
    LOBYTE(v872) = 1; /*0x825da7*/
    if ( v743 ) /*0x825daf*/
    {
      --v743[7].Unk08; /*0x825db1*/
      if ( !v457[7].Unk08 ) /*0x825dba*/
        sub_772560(v457); /*0x825dbe*/
    }
    v458 = a3; /*0x825dc3*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x825dce*/
    NiD3DPass_SetTextureStage(v446, 3u, v458); /*0x825ddb*/
    v459 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v745); /*0x825de8*/
    LOBYTE(v872) = 0x9E; /*0x825df5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v459); /*0x825dfd*/
    v460 = v745; /*0x825e02*/
    LOBYTE(v872) = 1; /*0x825e0b*/
    if ( v745 ) /*0x825e13*/
    {
      --v745[7].Unk08; /*0x825e15*/
      if ( !v460[7].Unk08 ) /*0x825e1e*/
        sub_772560(v460); /*0x825e22*/
    }
    v461 = a3; /*0x825e27*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x825e32*/
    NiD3DPass_SetTextureStage(v446, 4u, v461); /*0x825e3f*/
    v462 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v747); /*0x825e4c*/
    LOBYTE(v872) = 0x9F; /*0x825e59*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v462); /*0x825e61*/
    v463 = v747; /*0x825e66*/
    LOBYTE(v872) = 1; /*0x825e6f*/
    if ( v747 ) /*0x825e77*/
    {
      --v747[7].Unk08; /*0x825e79*/
      if ( !v463[7].Unk08 ) /*0x825e82*/
        sub_772560(v463); /*0x825e86*/
    }
    v464 = (NiD3DTextureStage *)a3; /*0x825e8b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x825e95*/
    NiD3DTextureStage_SetTexture(v464, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x825ea6*/
    NiD3DPass_SetTextureStage(v446, 5u, &v464->Stage); /*0x825eb0*/
    v465 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v749); /*0x825ebd*/
    LOBYTE(v872) = 0xA0; /*0x825eca*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v465); /*0x825ed2*/
    v466 = v749; /*0x825ed7*/
    LOBYTE(v872) = 1; /*0x825ee0*/
    if ( v749 ) /*0x825ee8*/
    {
      --v749[7].Unk08; /*0x825eea*/
      if ( !v466[7].Unk08 ) /*0x825ef3*/
        sub_772560(v466); /*0x825ef7*/
    }
    v467 = a3; /*0x825efc*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x825f07*/
    NiD3DPass_SetTextureStage(v446, 6u, v467); /*0x825f14*/
    v468 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v751); /*0x825f21*/
    LOBYTE(v872) = 0xA1; /*0x825f2e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v468); /*0x825f36*/
    v469 = v751; /*0x825f3b*/
    LOBYTE(v872) = 1; /*0x825f44*/
    if ( v751 ) /*0x825f4c*/
    {
      --v751[7].Unk08; /*0x825f4e*/
      if ( !v469[7].Unk08 ) /*0x825f57*/
        sub_772560(v469); /*0x825f5b*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x825f60*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x825f6a*/
    NiD3DPass_SetTextureStage(v446, 7u, &v1->Stage); /*0x825f77*/
  }
  NiD3DPass_SetVertexShader(v446, (NiD3DVertexShader *)unk_B45384); /*0x825f85*/
  NiD3DPass_SetPixelShader(v446, (NiD3DPixelShader *)unk_B4516C); /*0x825f93*/
  if ( !v446->RenderStateGroup ) /*0x825f98*/
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825fa2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v446->RenderStateGroup, 0x1B, 0, 0); /*0x825fac*/
  if ( !v446->RenderStateGroup ) /*0x825fb1*/
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825fbb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v446->RenderStateGroup, 0xF, 0, 0); /*0x825fc5*/
  if ( !v446->RenderStateGroup ) /*0x825fca*/
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825fd4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v446->RenderStateGroup, 7, 1, 0); /*0x825fdf*/
  if ( !v446->RenderStateGroup ) /*0x825fe4*/
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x825fee*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v446->RenderStateGroup, 0x17, 4, 0); /*0x825ff9*/
  if ( !v446->RenderStateGroup ) /*0x825ffe*/
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826008*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v446->RenderStateGroup, 0xE, 1, 0); /*0x826013*/
  if ( !v446->RenderStateGroup ) /*0x826018*/
    v446->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826022*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v446->RenderStateGroup, 0x34, 0, 0); /*0x82602c*/
  unk_B43D84 = 0x59088; /*0x82603a*/
  unk_B44414 = 0x19C; /*0x826040*/
  unk_B436F4 = 0x18000; /*0x82604a*/
  unk_B44AA4 = 0xC; /*0x826054*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45818); /*0x82605e*/
  v470 = (NiD3DPass *)v651; /*0x826063*/
  if ( (unsigned int)v651[6] < 8 ) /*0x82606b*/
  {
    v471 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v753); /*0x826079*/
    LOBYTE(v872) = 0xA2; /*0x826086*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v471); /*0x82608e*/
    v472 = v753; /*0x826093*/
    LOBYTE(v872) = 1; /*0x82609c*/
    if ( v753 ) /*0x8260a4*/
    {
      --v753[7].Unk08; /*0x8260a6*/
      if ( !v472[7].Unk08 ) /*0x8260af*/
        sub_772560(v472); /*0x8260b3*/
    }
    v473 = a3; /*0x8260b8*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8260c2*/
    NiD3DPass_SetTextureStage(v470, 0, v473); /*0x8260ce*/
    v474 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v755); /*0x8260db*/
    LOBYTE(v872) = 0xA3; /*0x8260e8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v474); /*0x8260f0*/
    v475 = v755; /*0x8260f5*/
    LOBYTE(v872) = 1; /*0x8260fe*/
    if ( v755 ) /*0x826106*/
    {
      --v755[7].Unk08; /*0x826108*/
      if ( !v475[7].Unk08 ) /*0x826111*/
        sub_772560(v475); /*0x826115*/
    }
    v476 = a3; /*0x82611a*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x826125*/
    NiD3DPass_SetTextureStage(v470, 1u, v476); /*0x826132*/
    v477 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v757); /*0x82613f*/
    LOBYTE(v872) = 0xA4; /*0x82614c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v477); /*0x826154*/
    v478 = v757; /*0x826159*/
    LOBYTE(v872) = 1; /*0x826162*/
    if ( v757 ) /*0x82616a*/
    {
      --v757[7].Unk08; /*0x82616c*/
      if ( !v478[7].Unk08 ) /*0x826175*/
        sub_772560(v478); /*0x826179*/
    }
    v479 = a3; /*0x82617e*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x826189*/
    NiD3DPass_SetTextureStage(v470, 2u, v479); /*0x826196*/
    v480 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v759); /*0x8261a3*/
    LOBYTE(v872) = 0xA5; /*0x8261b0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v480); /*0x8261b8*/
    v481 = v759; /*0x8261bd*/
    LOBYTE(v872) = 1; /*0x8261c6*/
    if ( v759 ) /*0x8261ce*/
    {
      --v759[7].Unk08; /*0x8261d0*/
      if ( !v481[7].Unk08 ) /*0x8261d9*/
        sub_772560(v481); /*0x8261dd*/
    }
    v482 = a3; /*0x8261e2*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8261ed*/
    NiD3DPass_SetTextureStage(v470, 3u, v482); /*0x8261fa*/
    v483 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v761); /*0x826207*/
    LOBYTE(v872) = 0xA6; /*0x826214*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v483); /*0x82621c*/
    v484 = v761; /*0x826221*/
    LOBYTE(v872) = 1; /*0x82622a*/
    if ( v761 ) /*0x826232*/
    {
      --v761[7].Unk08; /*0x826234*/
      if ( !v484[7].Unk08 ) /*0x82623d*/
        sub_772560(v484); /*0x826241*/
    }
    v485 = a3; /*0x826246*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x826251*/
    NiD3DPass_SetTextureStage(v470, 4u, v485); /*0x82625e*/
    v486 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v763); /*0x82626b*/
    LOBYTE(v872) = 0xA7; /*0x826278*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v486); /*0x826280*/
    v487 = v763; /*0x826285*/
    LOBYTE(v872) = 1; /*0x82628e*/
    if ( v763 ) /*0x826296*/
    {
      --v763[7].Unk08; /*0x826298*/
      if ( !v487[7].Unk08 ) /*0x8262a1*/
        sub_772560(v487); /*0x8262a5*/
    }
    v488 = (NiD3DTextureStage *)a3; /*0x8262aa*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8262b4*/
    NiD3DTextureStage_SetTexture(v488, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8262c4*/
    NiD3DPass_SetTextureStage(v470, 5u, &v488->Stage); /*0x8262ce*/
    v489 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v765); /*0x8262db*/
    LOBYTE(v872) = 0xA8; /*0x8262e8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v489); /*0x8262f0*/
    v490 = v765; /*0x8262f5*/
    LOBYTE(v872) = 1; /*0x8262fe*/
    if ( v765 ) /*0x826306*/
    {
      --v765[7].Unk08; /*0x826308*/
      if ( !v490[7].Unk08 ) /*0x826311*/
        sub_772560(v490); /*0x826315*/
    }
    v491 = a3; /*0x82631a*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x826325*/
    NiD3DPass_SetTextureStage(v470, 6u, v491); /*0x826332*/
    v492 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v767); /*0x82633f*/
    LOBYTE(v872) = 0xA9; /*0x82634c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v492); /*0x826354*/
    v493 = v767; /*0x826359*/
    LOBYTE(v872) = 1; /*0x826362*/
    if ( v767 ) /*0x82636a*/
    {
      --v767[7].Unk08; /*0x82636c*/
      if ( !v493[7].Unk08 ) /*0x826375*/
        sub_772560(v493); /*0x826379*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82637e*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x826388*/
    NiD3DPass_SetTextureStage(v470, 7u, &v1->Stage); /*0x826395*/
  }
  NiD3DPass_SetVertexShader(v470, (NiD3DVertexShader *)unk_B45384); /*0x8263a2*/
  NiD3DPass_SetPixelShader(v470, (NiD3DPixelShader *)unk_B45170); /*0x8263b0*/
  if ( !v470->RenderStateGroup ) /*0x8263b5*/
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8263bf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v470->RenderStateGroup, 0x1B, 0, 0); /*0x8263c9*/
  if ( !v470->RenderStateGroup ) /*0x8263ce*/
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8263d8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v470->RenderStateGroup, 0xF, 0, 0); /*0x8263e2*/
  if ( !v470->RenderStateGroup ) /*0x8263e7*/
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8263f1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v470->RenderStateGroup, 7, 1, 0); /*0x8263fc*/
  if ( !v470->RenderStateGroup ) /*0x826401*/
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82640b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v470->RenderStateGroup, 0x17, 4, 0); /*0x826416*/
  if ( !v470->RenderStateGroup ) /*0x82641b*/
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826425*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v470->RenderStateGroup, 0xE, 1, 0); /*0x826430*/
  if ( !v470->RenderStateGroup ) /*0x826435*/
    v470->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82643f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v470->RenderStateGroup, 0x34, 0, 0); /*0x826449*/
  unk_B43D98 = 0x59088; /*0x826457*/
  unk_B44428 = 0x19C; /*0x82645d*/
  unk_B43708 = 0x18000; /*0x826467*/
  unk_B44AB8 = 0xC; /*0x826471*/
  sub_76C890((NiD3DPass **)&v651, &unk_B4581C); /*0x82647b*/
  v494 = (NiD3DPass *)v651; /*0x826480*/
  if ( (unsigned int)v651[6] < 8 ) /*0x826488*/
  {
    v495 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v769); /*0x826496*/
    LOBYTE(v872) = 0xAA; /*0x8264a3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v495); /*0x8264ab*/
    v496 = v769; /*0x8264b0*/
    LOBYTE(v872) = 1; /*0x8264b9*/
    if ( v769 ) /*0x8264c1*/
    {
      --v769[7].Unk08; /*0x8264c3*/
      if ( !v496[7].Unk08 ) /*0x8264cc*/
        sub_772560(v496); /*0x8264d0*/
    }
    v497 = a3; /*0x8264d5*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8264df*/
    NiD3DPass_SetTextureStage(v494, 0, v497); /*0x8264eb*/
    v498 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v771); /*0x8264f8*/
    LOBYTE(v872) = 0xAB; /*0x826505*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v498); /*0x82650d*/
    v499 = v771; /*0x826512*/
    LOBYTE(v872) = 1; /*0x82651b*/
    if ( v771 ) /*0x826523*/
    {
      --v771[7].Unk08; /*0x826525*/
      if ( !v499[7].Unk08 ) /*0x82652e*/
        sub_772560(v499); /*0x826532*/
    }
    v500 = a3; /*0x826537*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x826542*/
    NiD3DPass_SetTextureStage(v494, 1u, v500); /*0x82654f*/
    v501 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v773); /*0x82655c*/
    LOBYTE(v872) = 0xAC; /*0x826569*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v501); /*0x826571*/
    v502 = v773; /*0x826576*/
    LOBYTE(v872) = 1; /*0x82657f*/
    if ( v773 ) /*0x826587*/
    {
      --v773[7].Unk08; /*0x826589*/
      if ( !v502[7].Unk08 ) /*0x826592*/
        sub_772560(v502); /*0x826596*/
    }
    v503 = a3; /*0x82659b*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8265a6*/
    NiD3DPass_SetTextureStage(v494, 2u, v503); /*0x8265b3*/
    v504 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v775); /*0x8265c0*/
    LOBYTE(v872) = 0xAD; /*0x8265cd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v504); /*0x8265d5*/
    v505 = v775; /*0x8265da*/
    LOBYTE(v872) = 1; /*0x8265e3*/
    if ( v775 ) /*0x8265eb*/
    {
      --v775[7].Unk08; /*0x8265ed*/
      if ( !v505[7].Unk08 ) /*0x8265f6*/
        sub_772560(v505); /*0x8265fa*/
    }
    v506 = a3; /*0x8265ff*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82660a*/
    NiD3DPass_SetTextureStage(v494, 3u, v506); /*0x826617*/
    v507 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v777); /*0x826624*/
    LOBYTE(v872) = 0xAE; /*0x826631*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v507); /*0x826639*/
    v508 = v777; /*0x82663e*/
    LOBYTE(v872) = 1; /*0x826647*/
    if ( v777 ) /*0x82664f*/
    {
      --v777[7].Unk08; /*0x826651*/
      if ( !v508[7].Unk08 ) /*0x82665a*/
        sub_772560(v508); /*0x82665e*/
    }
    v509 = a3; /*0x826663*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82666e*/
    NiD3DPass_SetTextureStage(v494, 4u, v509); /*0x82667b*/
    v510 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v779); /*0x826688*/
    LOBYTE(v872) = 0xAF; /*0x826695*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v510); /*0x82669d*/
    v511 = v779; /*0x8266a2*/
    LOBYTE(v872) = 1; /*0x8266ab*/
    if ( v779 ) /*0x8266b3*/
    {
      --v779[7].Unk08; /*0x8266b5*/
      if ( !v511[7].Unk08 ) /*0x8266be*/
        sub_772560(v511); /*0x8266c2*/
    }
    v512 = (NiD3DTextureStage *)a3; /*0x8266c7*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x8266d1*/
    NiD3DTextureStage_SetTexture(v512, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8266e2*/
    NiD3DPass_SetTextureStage(v494, 5u, &v512->Stage); /*0x8266ec*/
    v513 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v781); /*0x8266f9*/
    LOBYTE(v872) = 0xB0; /*0x826706*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v513); /*0x82670e*/
    v514 = v781; /*0x826713*/
    LOBYTE(v872) = 1; /*0x82671c*/
    if ( v781 ) /*0x826724*/
    {
      --v781[7].Unk08; /*0x826726*/
      if ( !v514[7].Unk08 ) /*0x82672f*/
        sub_772560(v514); /*0x826733*/
    }
    v515 = a3; /*0x826738*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x826743*/
    NiD3DPass_SetTextureStage(v494, 6u, v515); /*0x826750*/
    v516 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v783); /*0x82675d*/
    LOBYTE(v872) = 0xB1; /*0x82676a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v516); /*0x826772*/
    v517 = v783; /*0x826777*/
    LOBYTE(v872) = 1; /*0x826780*/
    if ( v783 ) /*0x826788*/
    {
      --v783[7].Unk08; /*0x82678a*/
      if ( !v517[7].Unk08 ) /*0x826793*/
        sub_772560(v517); /*0x826797*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82679c*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8267a6*/
    NiD3DPass_SetTextureStage(v494, 7u, &v1->Stage); /*0x8267b3*/
  }
  NiD3DPass_SetVertexShader(v494, (NiD3DVertexShader *)unk_B45388); /*0x8267c1*/
  NiD3DPass_SetPixelShader(v494, (NiD3DPixelShader *)unk_B45174); /*0x8267ce*/
  if ( !v494->RenderStateGroup ) /*0x8267d3*/
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8267dd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v494->RenderStateGroup, 0x1B, 0, 0); /*0x8267e7*/
  if ( !v494->RenderStateGroup ) /*0x8267ec*/
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8267f6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v494->RenderStateGroup, 0xF, 0, 0); /*0x826800*/
  if ( !v494->RenderStateGroup ) /*0x826805*/
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82680f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v494->RenderStateGroup, 7, 1, 0); /*0x82681a*/
  if ( !v494->RenderStateGroup ) /*0x82681f*/
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826829*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v494->RenderStateGroup, 0x17, 4, 0); /*0x826834*/
  if ( !v494->RenderStateGroup ) /*0x826839*/
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826843*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v494->RenderStateGroup, 0xE, 1, 0); /*0x82684e*/
  if ( !v494->RenderStateGroup ) /*0x826853*/
    v494->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82685d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v494->RenderStateGroup, 0x34, 0, 0); /*0x826867*/
  unk_B43D9C = 0x190F2; /*0x82687a*/
  unk_B4442C = 0x11C; /*0x826880*/
  unk_B4370C = 0x18060; /*0x82688a*/
  unk_B44ABC = 8; /*0x826894*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45820); /*0x82689e*/
  v518 = (NiD3DPass *)v651; /*0x8268a3*/
  if ( (unsigned int)v651[6] < 8 ) /*0x8268ab*/
  {
    v519 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v785); /*0x8268b9*/
    LOBYTE(v872) = 0xB2; /*0x8268c6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v519); /*0x8268ce*/
    v520 = v785; /*0x8268d3*/
    LOBYTE(v872) = 1; /*0x8268dc*/
    if ( v785 ) /*0x8268e4*/
    {
      --v785[7].Unk08; /*0x8268e6*/
      if ( !v520[7].Unk08 ) /*0x8268ef*/
        sub_772560(v520); /*0x8268f3*/
    }
    v521 = a3; /*0x8268f8*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x826902*/
    NiD3DPass_SetTextureStage(v518, 0, v521); /*0x82690e*/
    v522 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v787); /*0x82691b*/
    LOBYTE(v872) = 0xB3; /*0x826928*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v522); /*0x826930*/
    v523 = v787; /*0x826935*/
    LOBYTE(v872) = 1; /*0x82693e*/
    if ( v787 ) /*0x826946*/
    {
      --v787[7].Unk08; /*0x826948*/
      if ( !v523[7].Unk08 ) /*0x826951*/
        sub_772560(v523); /*0x826955*/
    }
    v524 = a3; /*0x82695a*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x826965*/
    NiD3DPass_SetTextureStage(v518, 1u, v524); /*0x826972*/
    v525 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v789); /*0x82697f*/
    LOBYTE(v872) = 0xB4; /*0x82698c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v525); /*0x826994*/
    v526 = v789; /*0x826999*/
    LOBYTE(v872) = 1; /*0x8269a2*/
    if ( v789 ) /*0x8269aa*/
    {
      --v789[7].Unk08; /*0x8269ac*/
      if ( !v526[7].Unk08 ) /*0x8269b5*/
        sub_772560(v526); /*0x8269b9*/
    }
    v527 = a3; /*0x8269be*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8269c9*/
    NiD3DPass_SetTextureStage(v518, 2u, v527); /*0x8269d6*/
    v528 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v791); /*0x8269e3*/
    LOBYTE(v872) = 0xB5; /*0x8269f0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v528); /*0x8269f8*/
    v529 = v791; /*0x8269fd*/
    LOBYTE(v872) = 1; /*0x826a06*/
    if ( v791 ) /*0x826a0e*/
    {
      --v791[7].Unk08; /*0x826a10*/
      if ( !v529[7].Unk08 ) /*0x826a19*/
        sub_772560(v529); /*0x826a1d*/
    }
    v530 = a3; /*0x826a22*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x826a2d*/
    NiD3DPass_SetTextureStage(v518, 3u, v530); /*0x826a3a*/
    v531 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v793); /*0x826a47*/
    LOBYTE(v872) = 0xB6; /*0x826a54*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v531); /*0x826a5c*/
    v532 = v793; /*0x826a61*/
    LOBYTE(v872) = 1; /*0x826a6a*/
    if ( v793 ) /*0x826a72*/
    {
      --v793[7].Unk08; /*0x826a74*/
      if ( !v532[7].Unk08 ) /*0x826a7d*/
        sub_772560(v532); /*0x826a81*/
    }
    v533 = a3; /*0x826a86*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x826a91*/
    NiD3DPass_SetTextureStage(v518, 4u, v533); /*0x826a9e*/
    v534 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v795); /*0x826aab*/
    LOBYTE(v872) = 0xB7; /*0x826ab8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v534); /*0x826ac0*/
    v535 = v795; /*0x826ac5*/
    LOBYTE(v872) = 1; /*0x826ace*/
    if ( v795 ) /*0x826ad6*/
    {
      --v795[7].Unk08; /*0x826ad8*/
      if ( !v535[7].Unk08 ) /*0x826ae1*/
        sub_772560(v535); /*0x826ae5*/
    }
    v536 = (NiD3DTextureStage *)a3; /*0x826aea*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x826af4*/
    NiD3DTextureStage_SetTexture(v536, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x826b05*/
    NiD3DPass_SetTextureStage(v518, 5u, &v536->Stage); /*0x826b0f*/
    v537 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v797); /*0x826b1c*/
    LOBYTE(v872) = 0xB8; /*0x826b29*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v537); /*0x826b31*/
    v538 = v797; /*0x826b36*/
    LOBYTE(v872) = 1; /*0x826b3f*/
    if ( v797 ) /*0x826b47*/
    {
      --v797[7].Unk08; /*0x826b49*/
      if ( !v538[7].Unk08 ) /*0x826b52*/
        sub_772560(v538); /*0x826b56*/
    }
    v539 = a3; /*0x826b5b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x826b66*/
    NiD3DPass_SetTextureStage(v518, 6u, v539); /*0x826b73*/
    v540 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v799); /*0x826b80*/
    LOBYTE(v872) = 0xB9; /*0x826b8d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v540); /*0x826b95*/
    v541 = v799; /*0x826b9a*/
    LOBYTE(v872) = 1; /*0x826ba3*/
    if ( v799 ) /*0x826bab*/
    {
      --v799[7].Unk08; /*0x826bad*/
      if ( !v541[7].Unk08 ) /*0x826bb6*/
        sub_772560(v541); /*0x826bba*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x826bbf*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x826bc9*/
    NiD3DPass_SetTextureStage(v518, 7u, &v1->Stage); /*0x826bd6*/
  }
  NiD3DPass_SetVertexShader(v518, (NiD3DVertexShader *)unk_B45388); /*0x826be4*/
  NiD3DPass_SetPixelShader(v518, (NiD3DPixelShader *)unk_B45178); /*0x826bf2*/
  if ( !v518->RenderStateGroup ) /*0x826bf7*/
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826c01*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v518->RenderStateGroup, 0x1B, 0, 0); /*0x826c0b*/
  if ( !v518->RenderStateGroup ) /*0x826c10*/
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826c1a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v518->RenderStateGroup, 0xF, 0, 0); /*0x826c24*/
  if ( !v518->RenderStateGroup ) /*0x826c29*/
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826c33*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v518->RenderStateGroup, 7, 1, 0); /*0x826c3e*/
  if ( !v518->RenderStateGroup ) /*0x826c43*/
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826c4d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v518->RenderStateGroup, 0x17, 4, 0); /*0x826c58*/
  if ( !v518->RenderStateGroup ) /*0x826c5d*/
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826c67*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v518->RenderStateGroup, 0xE, 1, 0); /*0x826c72*/
  if ( !v518->RenderStateGroup ) /*0x826c77*/
    v518->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x826c81*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v518->RenderStateGroup, 0x34, 0, 0); /*0x826c8b*/
  unk_B43DA0 = 0x190F2; /*0x826c99*/
  unk_B44430 = 0x19C; /*0x826c9f*/
  unk_B43710 = 0x18060; /*0x826ca9*/
  unk_B44AC0 = 0xC; /*0x826cb3*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45830); /*0x826cbd*/
  v542 = (NiD3DPass *)v651; /*0x826cc2*/
  if ( (unsigned int)v651[6] < 8 ) /*0x826cca*/
  {
    v543 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v801); /*0x826cd8*/
    LOBYTE(v872) = 0xBA; /*0x826ce5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v543); /*0x826ced*/
    v544 = v801; /*0x826cf2*/
    LOBYTE(v872) = 1; /*0x826cfb*/
    if ( v801 ) /*0x826d03*/
    {
      --v801[7].Unk08; /*0x826d05*/
      if ( !v544[7].Unk08 ) /*0x826d0e*/
        sub_772560(v544); /*0x826d12*/
    }
    v545 = a3; /*0x826d17*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x826d21*/
    NiD3DPass_SetTextureStage(v542, 0, v545); /*0x826d2d*/
    v546 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v803); /*0x826d3a*/
    LOBYTE(v872) = 0xBB; /*0x826d47*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v546); /*0x826d4f*/
    v547 = v803; /*0x826d54*/
    LOBYTE(v872) = 1; /*0x826d5d*/
    if ( v803 ) /*0x826d65*/
    {
      --v803[7].Unk08; /*0x826d67*/
      if ( !v547[7].Unk08 ) /*0x826d70*/
        sub_772560(v547); /*0x826d74*/
    }
    v548 = a3; /*0x826d79*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x826d84*/
    NiD3DPass_SetTextureStage(v542, 1u, v548); /*0x826d91*/
    v549 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v805); /*0x826d9e*/
    LOBYTE(v872) = 0xBC; /*0x826dab*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v549); /*0x826db3*/
    v550 = v805; /*0x826db8*/
    LOBYTE(v872) = 1; /*0x826dc1*/
    if ( v805 ) /*0x826dc9*/
    {
      --v805[7].Unk08; /*0x826dcb*/
      if ( !v550[7].Unk08 ) /*0x826dd4*/
        sub_772560(v550); /*0x826dd8*/
    }
    v551 = a3; /*0x826ddd*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x826de8*/
    NiD3DPass_SetTextureStage(v542, 2u, v551); /*0x826df5*/
    v552 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v807); /*0x826e02*/
    LOBYTE(v872) = 0xBD; /*0x826e0f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v552); /*0x826e17*/
    v553 = v807; /*0x826e1c*/
    LOBYTE(v872) = 1; /*0x826e25*/
    if ( v807 ) /*0x826e2d*/
    {
      --v807[7].Unk08; /*0x826e2f*/
      if ( !v553[7].Unk08 ) /*0x826e38*/
        sub_772560(v553); /*0x826e3c*/
    }
    v554 = a3; /*0x826e41*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x826e4c*/
    NiD3DPass_SetTextureStage(v542, 3u, v554); /*0x826e59*/
    v555 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v809); /*0x826e66*/
    LOBYTE(v872) = 0xBE; /*0x826e73*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v555); /*0x826e7b*/
    v556 = v809; /*0x826e80*/
    LOBYTE(v872) = 1; /*0x826e89*/
    if ( v809 ) /*0x826e91*/
    {
      --v809[7].Unk08; /*0x826e93*/
      if ( !v556[7].Unk08 ) /*0x826e9c*/
        sub_772560(v556); /*0x826ea0*/
    }
    v557 = a3; /*0x826ea5*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x826eb0*/
    NiD3DPass_SetTextureStage(v542, 4u, v557); /*0x826ebd*/
    v558 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v811); /*0x826eca*/
    LOBYTE(v872) = 0xBF; /*0x826ed7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v558); /*0x826edf*/
    v559 = v811; /*0x826ee4*/
    LOBYTE(v872) = 1; /*0x826eed*/
    if ( v811 ) /*0x826ef5*/
    {
      --v811[7].Unk08; /*0x826ef7*/
      if ( !v559[7].Unk08 ) /*0x826f00*/
        sub_772560(v559); /*0x826f04*/
    }
    v560 = (NiD3DTextureStage *)a3; /*0x826f09*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x826f13*/
    NiD3DTextureStage_SetTexture(v560, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x826f23*/
    NiD3DPass_SetTextureStage(v542, 5u, &v560->Stage); /*0x826f2d*/
    v561 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v813); /*0x826f3a*/
    LOBYTE(v872) = 0xC0; /*0x826f47*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v561); /*0x826f4f*/
    v562 = v813; /*0x826f54*/
    LOBYTE(v872) = 1; /*0x826f5d*/
    if ( v813 ) /*0x826f65*/
    {
      --v813[7].Unk08; /*0x826f67*/
      if ( !v562[7].Unk08 ) /*0x826f70*/
        sub_772560(v562); /*0x826f74*/
    }
    v563 = a3; /*0x826f79*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x826f84*/
    NiD3DPass_SetTextureStage(v542, 6u, v563); /*0x826f91*/
    v564 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v815); /*0x826f9e*/
    LOBYTE(v872) = 0xC1; /*0x826fab*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v564); /*0x826fb3*/
    v565 = v815; /*0x826fb8*/
    LOBYTE(v872) = 1; /*0x826fc1*/
    if ( v815 ) /*0x826fc9*/
    {
      --v815[7].Unk08; /*0x826fcb*/
      if ( !v565[7].Unk08 ) /*0x826fd4*/
        sub_772560(v565); /*0x826fd8*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x826fdd*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x826fe7*/
    NiD3DPass_SetTextureStage(v542, 7u, &v1->Stage); /*0x826ff4*/
  }
  NiD3DPass_SetVertexShader(v542, (NiD3DVertexShader *)unk_B45388); /*0x827001*/
  NiD3DPass_SetPixelShader(v542, (NiD3DPixelShader *)unk_B4517C); /*0x82700f*/
  if ( !v542->RenderStateGroup ) /*0x827014*/
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82701e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v542->RenderStateGroup, 0x1B, 0, 0); /*0x827028*/
  if ( !v542->RenderStateGroup ) /*0x82702d*/
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827037*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v542->RenderStateGroup, 0xF, 0, 0); /*0x827041*/
  if ( !v542->RenderStateGroup ) /*0x827046*/
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827050*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v542->RenderStateGroup, 7, 1, 0); /*0x82705b*/
  if ( !v542->RenderStateGroup ) /*0x827060*/
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82706a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v542->RenderStateGroup, 0x17, 4, 0); /*0x827075*/
  if ( !v542->RenderStateGroup ) /*0x82707a*/
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827084*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v542->RenderStateGroup, 0xE, 1, 0); /*0x82708f*/
  if ( !v542->RenderStateGroup ) /*0x827094*/
    v542->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82709e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v542->RenderStateGroup, 0x34, 0, 0); /*0x8270a8*/
  unk_B43DB0 = 0x190F2; /*0x8270b6*/
  unk_B44440 = 0x19C; /*0x8270bc*/
  unk_B43720 = 0x18060; /*0x8270c6*/
  unk_B44AD0 = 0xC; /*0x8270d0*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45834); /*0x8270da*/
  v566 = (NiD3DPass *)v651; /*0x8270df*/
  if ( (unsigned int)v651[6] < 8 ) /*0x8270e7*/
  {
    v567 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v817); /*0x8270f5*/
    LOBYTE(v872) = 0xC2; /*0x827102*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v567); /*0x82710a*/
    v568 = v817; /*0x82710f*/
    LOBYTE(v872) = 1; /*0x827118*/
    if ( v817 ) /*0x827120*/
    {
      --v817[7].Unk08; /*0x827122*/
      if ( !v568[7].Unk08 ) /*0x82712b*/
        sub_772560(v568); /*0x82712f*/
    }
    v569 = a3; /*0x827134*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82713e*/
    NiD3DPass_SetTextureStage(v566, 0, v569); /*0x82714a*/
    v570 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v819); /*0x827157*/
    LOBYTE(v872) = 0xC3; /*0x827164*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v570); /*0x82716c*/
    v571 = v819; /*0x827171*/
    LOBYTE(v872) = 1; /*0x82717a*/
    if ( v819 ) /*0x827182*/
    {
      --v819[7].Unk08; /*0x827184*/
      if ( !v571[7].Unk08 ) /*0x82718d*/
        sub_772560(v571); /*0x827191*/
    }
    v572 = a3; /*0x827196*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8271a1*/
    NiD3DPass_SetTextureStage(v566, 1u, v572); /*0x8271ae*/
    v573 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v821); /*0x8271bb*/
    LOBYTE(v872) = 0xC4; /*0x8271c8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v573); /*0x8271d0*/
    v574 = v821; /*0x8271d5*/
    LOBYTE(v872) = 1; /*0x8271de*/
    if ( v821 ) /*0x8271e6*/
    {
      --v821[7].Unk08; /*0x8271e8*/
      if ( !v574[7].Unk08 ) /*0x8271f1*/
        sub_772560(v574); /*0x8271f5*/
    }
    v575 = a3; /*0x8271fa*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x827205*/
    NiD3DPass_SetTextureStage(v566, 2u, v575); /*0x827212*/
    v576 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v823); /*0x82721f*/
    LOBYTE(v872) = 0xC5; /*0x82722c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v576); /*0x827234*/
    v577 = v823; /*0x827239*/
    LOBYTE(v872) = 1; /*0x827242*/
    if ( v823 ) /*0x82724a*/
    {
      --v823[7].Unk08; /*0x82724c*/
      if ( !v577[7].Unk08 ) /*0x827255*/
        sub_772560(v577); /*0x827259*/
    }
    v578 = a3; /*0x82725e*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x827269*/
    NiD3DPass_SetTextureStage(v566, 3u, v578); /*0x827276*/
    v579 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v825); /*0x827283*/
    LOBYTE(v872) = 0xC6; /*0x827290*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v579); /*0x827298*/
    v580 = v825; /*0x82729d*/
    LOBYTE(v872) = 1; /*0x8272a6*/
    if ( v825 ) /*0x8272ae*/
    {
      --v825[7].Unk08; /*0x8272b0*/
      if ( !v580[7].Unk08 ) /*0x8272b9*/
        sub_772560(v580); /*0x8272bd*/
    }
    v581 = a3; /*0x8272c2*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8272cd*/
    NiD3DPass_SetTextureStage(v566, 4u, v581); /*0x8272da*/
    v582 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v827); /*0x8272e7*/
    LOBYTE(v872) = 0xC7; /*0x8272f4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v582); /*0x8272fc*/
    v583 = v827; /*0x827301*/
    LOBYTE(v872) = 1; /*0x82730a*/
    if ( v827 ) /*0x827312*/
    {
      --v827[7].Unk08; /*0x827314*/
      if ( !v583[7].Unk08 ) /*0x82731d*/
        sub_772560(v583); /*0x827321*/
    }
    v584 = (NiD3DTextureStage *)a3; /*0x827326*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x827330*/
    NiD3DTextureStage_SetTexture(v584, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x827341*/
    NiD3DPass_SetTextureStage(v566, 5u, &v584->Stage); /*0x82734b*/
    v585 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v829); /*0x827358*/
    LOBYTE(v872) = 0xC8; /*0x827365*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v585); /*0x82736d*/
    v586 = v829; /*0x827372*/
    LOBYTE(v872) = 1; /*0x82737b*/
    if ( v829 ) /*0x827383*/
    {
      --v829[7].Unk08; /*0x827385*/
      if ( !v586[7].Unk08 ) /*0x82738e*/
        sub_772560(v586); /*0x827392*/
    }
    v587 = a3; /*0x827397*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8273a2*/
    NiD3DPass_SetTextureStage(v566, 6u, v587); /*0x8273af*/
    v588 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v831); /*0x8273bc*/
    LOBYTE(v872) = 0xC9; /*0x8273c9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v588); /*0x8273d1*/
    v589 = v831; /*0x8273d6*/
    LOBYTE(v872) = 1; /*0x8273df*/
    if ( v831 ) /*0x8273e7*/
    {
      --v831[7].Unk08; /*0x8273e9*/
      if ( !v589[7].Unk08 ) /*0x8273f2*/
        sub_772560(v589); /*0x8273f6*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x8273fb*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x827405*/
    NiD3DPass_SetTextureStage(v566, 7u, &v1->Stage); /*0x827412*/
  }
  NiD3DPass_SetVertexShader(v566, (NiD3DVertexShader *)unk_B4538C); /*0x827420*/
  NiD3DPass_SetPixelShader(v566, (NiD3DPixelShader *)unk_B45174); /*0x82742d*/
  if ( !v566->RenderStateGroup ) /*0x827432*/
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82743c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v566->RenderStateGroup, 0x1B, 0, 0); /*0x827446*/
  if ( !v566->RenderStateGroup ) /*0x82744b*/
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827455*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v566->RenderStateGroup, 0xF, 0, 0); /*0x82745f*/
  if ( !v566->RenderStateGroup ) /*0x827464*/
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82746e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v566->RenderStateGroup, 7, 1, 0); /*0x827479*/
  if ( !v566->RenderStateGroup ) /*0x82747e*/
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827488*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v566->RenderStateGroup, 0x17, 4, 0); /*0x827493*/
  if ( !v566->RenderStateGroup ) /*0x827498*/
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8274a2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v566->RenderStateGroup, 0xE, 1, 0); /*0x8274ad*/
  if ( !v566->RenderStateGroup ) /*0x8274b2*/
    v566->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8274bc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v566->RenderStateGroup, 0x34, 0, 0); /*0x8274c6*/
  unk_B43DB4 = 0x590F8; /*0x8274d9*/
  unk_B44444 = 0x11C; /*0x8274df*/
  unk_B43724 = 0x18060; /*0x8274e9*/
  unk_B44AD4 = 8; /*0x8274f3*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45838); /*0x8274fd*/
  v590 = (NiD3DPass *)v651; /*0x827502*/
  if ( (unsigned int)v651[6] < 8 ) /*0x82750a*/
  {
    v591 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v833); /*0x827518*/
    LOBYTE(v872) = 0xCA; /*0x827525*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v591); /*0x82752d*/
    v592 = v833; /*0x827532*/
    LOBYTE(v872) = 1; /*0x82753b*/
    if ( v833 ) /*0x827543*/
    {
      --v833[7].Unk08; /*0x827545*/
      if ( !v592[7].Unk08 ) /*0x82754e*/
        sub_772560(v592); /*0x827552*/
    }
    v593 = a3; /*0x827557*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x827561*/
    NiD3DPass_SetTextureStage(v590, 0, v593); /*0x82756d*/
    v594 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v835); /*0x82757a*/
    LOBYTE(v872) = 0xCB; /*0x827587*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v594); /*0x82758f*/
    v595 = v835; /*0x827594*/
    LOBYTE(v872) = 1; /*0x82759d*/
    if ( v835 ) /*0x8275a5*/
    {
      --v835[7].Unk08; /*0x8275a7*/
      if ( !v595[7].Unk08 ) /*0x8275b0*/
        sub_772560(v595); /*0x8275b4*/
    }
    v596 = a3; /*0x8275b9*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8275c4*/
    NiD3DPass_SetTextureStage(v590, 1u, v596); /*0x8275d1*/
    v597 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v837); /*0x8275de*/
    LOBYTE(v872) = 0xCC; /*0x8275eb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v597); /*0x8275f3*/
    v598 = v837; /*0x8275f8*/
    LOBYTE(v872) = 1; /*0x827601*/
    if ( v837 ) /*0x827609*/
    {
      --v837[7].Unk08; /*0x82760b*/
      if ( !v598[7].Unk08 ) /*0x827614*/
        sub_772560(v598); /*0x827618*/
    }
    v599 = a3; /*0x82761d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x827628*/
    NiD3DPass_SetTextureStage(v590, 2u, v599); /*0x827635*/
    v600 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v839); /*0x827642*/
    LOBYTE(v872) = 0xCD; /*0x82764f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v600); /*0x827657*/
    v601 = v839; /*0x82765c*/
    LOBYTE(v872) = 1; /*0x827665*/
    if ( v839 ) /*0x82766d*/
    {
      --v839[7].Unk08; /*0x82766f*/
      if ( !v601[7].Unk08 ) /*0x827678*/
        sub_772560(v601); /*0x82767c*/
    }
    v602 = a3; /*0x827681*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82768c*/
    NiD3DPass_SetTextureStage(v590, 3u, v602); /*0x827699*/
    v603 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v841); /*0x8276a6*/
    LOBYTE(v872) = 0xCE; /*0x8276b3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v603); /*0x8276bb*/
    v604 = v841; /*0x8276c0*/
    LOBYTE(v872) = 1; /*0x8276c9*/
    if ( v841 ) /*0x8276d1*/
    {
      --v841[7].Unk08; /*0x8276d3*/
      if ( !v604[7].Unk08 ) /*0x8276dc*/
        sub_772560(v604); /*0x8276e0*/
    }
    v605 = a3; /*0x8276e5*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8276f0*/
    NiD3DPass_SetTextureStage(v590, 4u, v605); /*0x8276fd*/
    v606 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v843); /*0x82770a*/
    LOBYTE(v872) = 0xCF; /*0x827717*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v606); /*0x82771f*/
    v607 = v843; /*0x827724*/
    LOBYTE(v872) = 1; /*0x82772d*/
    if ( v843 ) /*0x827735*/
    {
      --v843[7].Unk08; /*0x827737*/
      if ( !v607[7].Unk08 ) /*0x827740*/
        sub_772560(v607); /*0x827744*/
    }
    v608 = (NiD3DTextureStage *)a3; /*0x827749*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x827753*/
    NiD3DTextureStage_SetTexture(v608, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x827764*/
    NiD3DPass_SetTextureStage(v590, 5u, &v608->Stage); /*0x82776e*/
    v609 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v845); /*0x82777b*/
    LOBYTE(v872) = 0xD0; /*0x827788*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v609); /*0x827790*/
    v610 = v845; /*0x827795*/
    LOBYTE(v872) = 1; /*0x82779e*/
    if ( v845 ) /*0x8277a6*/
    {
      --v845[7].Unk08; /*0x8277a8*/
      if ( !v610[7].Unk08 ) /*0x8277b1*/
        sub_772560(v610); /*0x8277b5*/
    }
    v611 = a3; /*0x8277ba*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8277c5*/
    NiD3DPass_SetTextureStage(v590, 6u, v611); /*0x8277d2*/
    v612 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v847); /*0x8277df*/
    LOBYTE(v872) = 0xD1; /*0x8277ec*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v612); /*0x8277f4*/
    v613 = v847; /*0x8277f9*/
    LOBYTE(v872) = 1; /*0x827802*/
    if ( v847 ) /*0x82780a*/
    {
      --v847[7].Unk08; /*0x82780c*/
      if ( !v613[7].Unk08 ) /*0x827815*/
        sub_772560(v613); /*0x827819*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82781e*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x827828*/
    NiD3DPass_SetTextureStage(v590, 7u, &v1->Stage); /*0x827835*/
  }
  NiD3DPass_SetVertexShader(v590, (NiD3DVertexShader *)unk_B4538C); /*0x827843*/
  NiD3DPass_SetPixelShader(v590, (NiD3DPixelShader *)unk_B45178); /*0x827851*/
  if ( !v590->RenderStateGroup ) /*0x827856*/
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827860*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v590->RenderStateGroup, 0x1B, 0, 0); /*0x82786a*/
  if ( !v590->RenderStateGroup ) /*0x82786f*/
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827879*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v590->RenderStateGroup, 0xF, 0, 0); /*0x827883*/
  if ( !v590->RenderStateGroup ) /*0x827888*/
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827892*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v590->RenderStateGroup, 7, 1, 0); /*0x82789d*/
  if ( !v590->RenderStateGroup ) /*0x8278a2*/
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8278ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v590->RenderStateGroup, 0x17, 4, 0); /*0x8278b7*/
  if ( !v590->RenderStateGroup ) /*0x8278bc*/
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8278c6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v590->RenderStateGroup, 0xE, 1, 0); /*0x8278d1*/
  if ( !v590->RenderStateGroup ) /*0x8278d6*/
    v590->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8278e0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v590->RenderStateGroup, 0x34, 0, 0); /*0x8278ea*/
  unk_B43DB8 = 0x590F8; /*0x8278f8*/
  unk_B44448 = 0x19C; /*0x8278fe*/
  unk_B43728 = 0x18060; /*0x827908*/
  unk_B44AD8 = 0xC; /*0x827912*/
  sub_76C890((NiD3DPass **)&v651, &unk_B45838); /*0x82791c*/
  v614 = (NiD3DPass *)v651; /*0x827921*/
  if ( (unsigned int)v651[6] < 8 ) /*0x827929*/
  {
    v615 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v849); /*0x827937*/
    LOBYTE(v872) = 0xD2; /*0x827944*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v615); /*0x82794c*/
    v616 = v849; /*0x827951*/
    LOBYTE(v872) = 1; /*0x82795a*/
    if ( v849 ) /*0x827962*/
    {
      --v849[7].Unk08; /*0x827964*/
      if ( !v616[7].Unk08 ) /*0x82796d*/
        sub_772560(v616); /*0x827971*/
    }
    v617 = a3; /*0x827976*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x827980*/
    NiD3DPass_SetTextureStage(v614, 0, v617); /*0x82798c*/
    v618 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v851); /*0x827999*/
    LOBYTE(v872) = 0xD3; /*0x8279a6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v618); /*0x8279ae*/
    v619 = v851; /*0x8279b3*/
    LOBYTE(v872) = 1; /*0x8279bc*/
    if ( v851 ) /*0x8279c4*/
    {
      --v851[7].Unk08; /*0x8279c6*/
      if ( !v619[7].Unk08 ) /*0x8279cf*/
        sub_772560(v619); /*0x8279d3*/
    }
    v620 = a3; /*0x8279d8*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8279e3*/
    NiD3DPass_SetTextureStage(v614, 1u, v620); /*0x8279f0*/
    v621 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v853); /*0x8279fd*/
    LOBYTE(v872) = 0xD4; /*0x827a0a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v621); /*0x827a12*/
    v622 = v853; /*0x827a17*/
    LOBYTE(v872) = 1; /*0x827a20*/
    if ( v853 ) /*0x827a28*/
    {
      --v853[7].Unk08; /*0x827a2a*/
      if ( !v622[7].Unk08 ) /*0x827a33*/
        sub_772560(v622); /*0x827a37*/
    }
    v623 = a3; /*0x827a3c*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x827a47*/
    NiD3DPass_SetTextureStage(v614, 2u, v623); /*0x827a54*/
    v624 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v855); /*0x827a61*/
    LOBYTE(v872) = 0xD5; /*0x827a6e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v624); /*0x827a76*/
    v625 = v855; /*0x827a7b*/
    LOBYTE(v872) = 1; /*0x827a84*/
    if ( v855 ) /*0x827a8c*/
    {
      --v855[7].Unk08; /*0x827a8e*/
      if ( !v625[7].Unk08 ) /*0x827a97*/
        sub_772560(v625); /*0x827a9b*/
    }
    v626 = a3; /*0x827aa0*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x827aab*/
    NiD3DPass_SetTextureStage(v614, 3u, v626); /*0x827ab8*/
    v627 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v857); /*0x827ac5*/
    LOBYTE(v872) = 0xD6; /*0x827ad2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v627); /*0x827ada*/
    v628 = v857; /*0x827adf*/
    LOBYTE(v872) = 1; /*0x827ae8*/
    if ( v857 ) /*0x827af0*/
    {
      --v857[7].Unk08; /*0x827af2*/
      if ( !v628[7].Unk08 ) /*0x827afb*/
        sub_772560(v628); /*0x827aff*/
    }
    v629 = a3; /*0x827b04*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x827b0f*/
    NiD3DPass_SetTextureStage(v614, 4u, v629); /*0x827b1c*/
    v630 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v859); /*0x827b29*/
    LOBYTE(v872) = 0xD7; /*0x827b36*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v630); /*0x827b3e*/
    v631 = v859; /*0x827b43*/
    LOBYTE(v872) = 1; /*0x827b4c*/
    if ( v859 ) /*0x827b54*/
    {
      --v859[7].Unk08; /*0x827b56*/
      if ( !v631[7].Unk08 ) /*0x827b5f*/
        sub_772560(v631); /*0x827b63*/
    }
    v632 = (NiD3DTextureStage *)a3; /*0x827b68*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x827b72*/
    NiD3DTextureStage_SetTexture(v632, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x827b82*/
    NiD3DPass_SetTextureStage(v614, 5u, &v632->Stage); /*0x827b8c*/
    v633 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v861); /*0x827b99*/
    LOBYTE(v872) = 0xD8; /*0x827ba6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v633); /*0x827bae*/
    v634 = v861; /*0x827bb3*/
    LOBYTE(v872) = 1; /*0x827bbc*/
    if ( v861 ) /*0x827bc4*/
    {
      --v861[7].Unk08; /*0x827bc6*/
      if ( !v634[7].Unk08 ) /*0x827bcf*/
        sub_772560(v634); /*0x827bd3*/
    }
    v635 = a3; /*0x827bd8*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x827be3*/
    NiD3DPass_SetTextureStage(v614, 6u, v635); /*0x827bf0*/
    v636 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v863); /*0x827bfd*/
    LOBYTE(v872) = 0xD9; /*0x827c0a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v636); /*0x827c12*/
    v637 = v863; /*0x827c17*/
    LOBYTE(v872) = 1; /*0x827c20*/
    if ( v863 ) /*0x827c28*/
    {
      --v863[7].Unk08; /*0x827c2a*/
      if ( !v637[7].Unk08 ) /*0x827c33*/
        sub_772560(v637); /*0x827c37*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x827c3c*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x827c46*/
    NiD3DPass_SetTextureStage(v614, 7u, &v1->Stage); /*0x827c53*/
  }
  NiD3DPass_SetVertexShader(v614, (NiD3DVertexShader *)unk_B4538C); /*0x827c60*/
  NiD3DPass_SetPixelShader(v614, (NiD3DPixelShader *)unk_B45178); /*0x827c6e*/
  if ( !v614->RenderStateGroup ) /*0x827c73*/
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827c7d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v614->RenderStateGroup, 0x1B, 0, 0); /*0x827c87*/
  if ( !v614->RenderStateGroup ) /*0x827c8c*/
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827c96*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v614->RenderStateGroup, 0xF, 0, 0); /*0x827ca0*/
  if ( !v614->RenderStateGroup ) /*0x827ca5*/
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827caf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v614->RenderStateGroup, 7, 1, 0); /*0x827cba*/
  if ( !v614->RenderStateGroup ) /*0x827cbf*/
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827cc9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v614->RenderStateGroup, 0x17, 4, 0); /*0x827cd4*/
  if ( !v614->RenderStateGroup ) /*0x827cd9*/
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827ce3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v614->RenderStateGroup, 0xE, 1, 0); /*0x827cee*/
  if ( !v614->RenderStateGroup ) /*0x827cf3*/
    v614->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827cfd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v614->RenderStateGroup, 0x34, 0, 0); /*0x827d07*/
  unk_B43DB8 = 0x590F8; /*0x827d15*/
  unk_B44448 = 0x19C; /*0x827d1b*/
  unk_B43728 = 0x18060; /*0x827d25*/
  unk_B44AD8 = 0xC; /*0x827d2f*/
  sub_76C890((NiD3DPass **)&v651, (int *)&ShadowLightMode5RigidOpaquePass); /*0x827d39*/
  v638 = (NiD3DPass *)v651; /*0x827d3e*/
  if ( !v651[6] ) /*0x827d42*/
  {
    v639 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v865); /*0x827d50*/
    LOBYTE(v872) = 0xDA; /*0x827d5d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v639); /*0x827d65*/
    v640 = v865; /*0x827d6a*/
    LOBYTE(v872) = 1; /*0x827d73*/
    if ( v865 ) /*0x827d7b*/
    {
      --v865[7].Unk08; /*0x827d7d*/
      if ( !v640[7].Unk08 ) /*0x827d86*/
        sub_772560(v640); /*0x827d8a*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x827d8f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x827d99*/
    NiD3DPass_SetTextureStage(v638, v638->CurrentStage, &v1->Stage); /*0x827da8*/
  }
  NiD3DPass_SetVertexShader(v638, ShadowLightVS_SLS2052_RigidDepth); /*0x827db6*/
  NiD3DPass_SetPixelShader(v638, ShadowLightPS_SLS2058_OpaqueDepth); /*0x827dc4*/
  if ( !v638->RenderStateGroup ) /*0x827dc9*/
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827dd3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v638->RenderStateGroup, 0x1B, 0, 0); /*0x827ddd*/
  if ( !v638->RenderStateGroup ) /*0x827de2*/
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827dec*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v638->RenderStateGroup, 0xF, 0, 0); /*0x827df6*/
  if ( !v638->RenderStateGroup ) /*0x827dfb*/
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827e05*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v638->RenderStateGroup, 7, 1, 0); /*0x827e10*/
  if ( !v638->RenderStateGroup ) /*0x827e15*/
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827e1f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v638->RenderStateGroup, 0x17, 4, 0); /*0x827e2a*/
  if ( !v638->RenderStateGroup ) /*0x827e2f*/
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827e39*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v638->RenderStateGroup, 0xE, 1, 0); /*0x827e44*/
  if ( !v638->RenderStateGroup ) /*0x827e49*/
    v638->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827e53*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v638->RenderStateGroup, 0x34, 0, 0); /*0x827e5d*/
  unk_B43B38 = 0x400802; /*0x827e70*/
  unk_B441C8 = 0; /*0x827e76*/
  sub_76C890((NiD3DPass **)&v651, (int *)&ShadowLightMode5RigidAlphaTestPass); /*0x827e7c*/
  v641 = (NiD3DPass *)v651; /*0x827e81*/
  if ( !v651[6] ) /*0x827e85*/
  {
    v642 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v867); /*0x827e93*/
    LOBYTE(v872) = 0xDB; /*0x827ea0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v642); /*0x827ea8*/
    v643 = v867; /*0x827ead*/
    LOBYTE(v872) = 1; /*0x827eb6*/
    if ( v867 ) /*0x827ebe*/
    {
      --v867[7].Unk08; /*0x827ec0*/
      if ( !v643[7].Unk08 ) /*0x827ec9*/
        sub_772560(v643); /*0x827ecd*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x827ed2*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x827edc*/
    NiD3DPass_SetTextureStage(v641, v641->CurrentStage, &v1->Stage); /*0x827eeb*/
  }
  NiD3DPass_SetVertexShader(v641, ShadowLightVS_SLS2053_RigidDepthBaseUV); /*0x827ef9*/
  NiD3DPass_SetPixelShader(v641, ShadowLightPS_SLS2059_BaseAlphaDepth); /*0x827f06*/
  if ( !v641->RenderStateGroup ) /*0x827f0b*/
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827f15*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v641->RenderStateGroup, 0x1B, 0, 0); /*0x827f1f*/
  if ( !v641->RenderStateGroup ) /*0x827f24*/
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827f2e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v641->RenderStateGroup, 0xF, 1, 0); /*0x827f39*/
  if ( !v641->RenderStateGroup ) /*0x827f3e*/
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827f48*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v641->RenderStateGroup, 7, 1, 0); /*0x827f53*/
  if ( !v641->RenderStateGroup ) /*0x827f58*/
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827f62*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v641->RenderStateGroup, 0x17, 4, 0); /*0x827f6d*/
  if ( !v641->RenderStateGroup ) /*0x827f72*/
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827f7c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v641->RenderStateGroup, 0xE, 1, 0); /*0x827f87*/
  if ( !v641->RenderStateGroup ) /*0x827f8c*/
    v641->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x827f96*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v641->RenderStateGroup, 0x34, 0, 0); /*0x827fa0*/
  unk_B43B3C = 0x400802; /*0x827fae*/
  unk_B441CC = 0; /*0x827fb4*/
  sub_76C890((NiD3DPass **)&v651, (int *)&ShadowLightMode5SkinnedOpaquePass); /*0x827fba*/
  v644 = (NiD3DPass *)v651; /*0x827fbf*/
  if ( !v651[6] ) /*0x827fc3*/
  {
    v645 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v869); /*0x827fd1*/
    LOBYTE(v872) = 0xDC; /*0x827fde*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v645); /*0x827fe6*/
    v646 = v869; /*0x827feb*/
    LOBYTE(v872) = 1; /*0x827ff4*/
    if ( v869 ) /*0x827ffc*/
    {
      --v869[7].Unk08; /*0x827ffe*/
      if ( !v646[7].Unk08 ) /*0x828007*/
        sub_772560(v646); /*0x82800b*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x828010*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82801a*/
    NiD3DPass_SetTextureStage(v644, v644->CurrentStage, &v1->Stage); /*0x828029*/
  }
  NiD3DPass_SetVertexShader(v644, ShadowLightVS_SLS2054_SkinnedDepth); /*0x828036*/
  NiD3DPass_SetPixelShader(v644, ShadowLightPS_SLS2060_OpaqueDepth); /*0x828044*/
  if ( !v644->RenderStateGroup ) /*0x828049*/
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828053*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v644->RenderStateGroup, 0x1B, 0, 0); /*0x82805d*/
  if ( !v644->RenderStateGroup ) /*0x828062*/
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82806c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v644->RenderStateGroup, 0xF, 0, 0); /*0x828076*/
  if ( !v644->RenderStateGroup ) /*0x82807b*/
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828085*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v644->RenderStateGroup, 7, 1, 0); /*0x828090*/
  if ( !v644->RenderStateGroup ) /*0x828095*/
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82809f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v644->RenderStateGroup, 0x17, 4, 0); /*0x8280aa*/
  if ( !v644->RenderStateGroup ) /*0x8280af*/
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8280b9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v644->RenderStateGroup, 0xE, 1, 0); /*0x8280c4*/
  if ( !v644->RenderStateGroup ) /*0x8280c9*/
    v644->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8280d3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v644->RenderStateGroup, 0x34, 0, 0); /*0x8280dd*/
  unk_B43B40 = (int)&loc_840807 + 1; /*0x8280f0*/
  unk_B441D0 = 0; /*0x8280f6*/
  sub_76C890((NiD3DPass **)&v651, (int *)&ShadowLightMode5SkinnedAlphaTestPass); /*0x8280fc*/
  v647 = (NiD3DPass *)v651; /*0x828101*/
  if ( !v651[6] ) /*0x828105*/
  {
    v648 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v871); /*0x828113*/
    LOBYTE(v872) = 0xDD; /*0x828120*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v648); /*0x828128*/
    v649 = v871; /*0x82812d*/
    LOBYTE(v872) = 1; /*0x828136*/
    if ( v871 ) /*0x82813e*/
    {
      --v871[7].Unk08; /*0x828140*/
      if ( !v649[7].Unk08 ) /*0x828149*/
        sub_772560(v649); /*0x82814d*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x828152*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82815c*/
    NiD3DPass_SetTextureStage(v647, v647->CurrentStage, &v1->Stage); /*0x82816b*/
  }
  NiD3DPass_SetVertexShader(v647, ShadowLightVS_SLS2055_SkinnedDepthBaseUV); /*0x828179*/
  NiD3DPass_SetPixelShader(v647, ShadowLightPS_SLS2061_BaseAlphaDepth); /*0x828187*/
  if ( !v647->RenderStateGroup ) /*0x82818c*/
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828196*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v647->RenderStateGroup, 0x1B, 0, 0); /*0x8281a0*/
  if ( !v647->RenderStateGroup ) /*0x8281a5*/
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8281af*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v647->RenderStateGroup, 0xF, 1, 0); /*0x8281ba*/
  if ( !v647->RenderStateGroup ) /*0x8281bf*/
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8281c9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v647->RenderStateGroup, 7, 1, 0); /*0x8281d4*/
  if ( !v647->RenderStateGroup ) /*0x8281d9*/
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8281e3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v647->RenderStateGroup, 0x17, 4, 0); /*0x8281ee*/
  if ( !v647->RenderStateGroup ) /*0x8281f3*/
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8281fd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v647->RenderStateGroup, 0xE, 1, 0); /*0x828208*/
  if ( !v647->RenderStateGroup ) /*0x82820d*/
    v647->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828217*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v647->RenderStateGroup, 0x34, 0, 0); /*0x828221*/
  unk_B43B44 = (int)&loc_840807 + 1; /*0x828228*/
  unk_B441D4 = 0; /*0x82822e*/
  LOBYTE(v872) = 0; /*0x828234*/
  if ( v1 ) /*0x82823c*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x828241*/
    if ( v3 ) /*0x828244*/
      sub_772560(v1); /*0x828248*/
  }
  v3 = v647->RefCount-- == 1; /*0x828252*/
  v872 = 0xFFFFFFFF; /*0x828255*/
  if ( v3 ) /*0x82825c*/
    NiD3DPass_ReleaseToPool(v647); /*0x828260*/
}
