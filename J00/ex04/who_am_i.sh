#!/bin/sh


var=$(ldapwhoami -Q)

echo ${var:3}

