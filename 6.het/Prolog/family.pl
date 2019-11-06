férfi(nándi).
férfi(matyi).
férfi(norbi).
férfi(dodi).
férfi(joska).
nő(gréta).
nő(erika).
nő(kitti).
nő(marica).
gyereke(nándi, norbi).
gyereke(matyi, norbi).
gyereke(gréta, norbi).
gyereke(nándi, erika).
gyereke(matyi, erika).
gyereke(gréta, erika).
gyereke(norbi, dodi).
gyereke(norbi, kitti).
gyereke(erika, joska).
gyereke(erika, marica).
apa(X) :- férfi(X), gyereke(_Y, X).
apja(X, Y) :- férfi(X), gyereke(Y, X).
anya(X) :- nő(X), gyereke(_Y, X).
anyja(X, Y) :- nő(X), gyereke(Y, X).
nagyapa(X) :- apja(X, Y), (apja(Y, _U); anyja(Y, _Z)).
nagyapja(X, Z) :- apja(X, Y), (apja(Y, Z); anyja(Y, Z)).
